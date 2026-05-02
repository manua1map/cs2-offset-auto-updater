#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "web.h"

namespace offsets
{
    class updater
    {
    private:
        web::URLSession session;

        const std::string base_url =
            "https://raw.githubusercontent.com/a2x/cs2-dumper/refs/heads/main/output";

        std::string offsets_cache;
        std::string client_cache;

        bool offsets_loaded = false;
        bool client_loaded = false;

        std::vector<std::string> SplitLines(const std::string& data)
        {
            std::vector<std::string> lines;
            std::istringstream stream(data);
            std::string line;

            while (std::getline(stream, line))
                lines.push_back(line);

            return lines;
        }

        std::vector<std::string> ExtractLines(const std::vector<std::string>& lines, const std::string& word)
        {
            std::vector<std::string> results;

            for (const auto& line : lines)
            {
                size_t pos = line.find(word);
                if (pos != std::string::npos)
                    results.push_back(line.substr(pos + word.length()));
            }

            return results;
        }
        bool FetchIfNeeded(int file_type)
        {
            std::string url;

            if (file_type == 1) // offsets.hpp
            {
                if (offsets_loaded)
                    return true;

                url = base_url + "/offsets.hpp";

                if (!session.OpenURL(url))
                    return false;

                offsets_cache = session.ReadContent();
                session.CloseURL();

                offsets_loaded = true;
                return true;
            }
            else if (file_type == 2) // client_dll.hpp
            {
                if (client_loaded)
                    return true;

                url = base_url + "/client_dll.hpp";

                if (!session.OpenURL(url))
                    return false;

                client_cache = session.ReadContent();
                session.CloseURL();

                client_loaded = true;
                return true;
            }

            return false;
        }

    public:
        int total_scanned = 0;
        int total_valid = 0;

        updater()
        {
            session.OpenSession();
        }

        ~updater()
        {
            session.CloseSession();
        }

        uintptr_t GetAddress(const std::string& addr_name, int file_type)
        {
            constexpr bool print_addr = false;

            total_scanned++;

            if (!FetchIfNeeded(file_type))
                return 0;

            const std::string* source = nullptr;
            std::string formatted_name = addr_name;

            if (file_type == 1)
            {
                source = &offsets_cache;
            }
            else if (file_type == 2)
            {
                source = &client_cache;

                if (addr_name.rfind("constexpr std::ptrdiff_t ", 0) != 0)
                    formatted_name = "constexpr std::ptrdiff_t " + addr_name + " = ";
            }

            if (!source)
                return 0;

            auto lines = SplitLines(*source);
            auto results = ExtractLines(lines, formatted_name);

            for (const auto& result : results)
            {
                std::string cleaned = web::ReplaceMultiple(result, { "=", ";" }, "");
                uintptr_t addr = static_cast<uintptr_t>(std::stoull(cleaned, nullptr, 16));

                if (addr)
                {
                    total_valid++;

                    if (print_addr)
                        std::cout << "[updater] " << addr_name << " -> 0x"
                                  << std::hex << addr << std::dec << "\n";

                    return addr;
                }
            }

            if (print_addr)
                std::cout << "[updater] " << addr_name << " is invalid\n";

            return 0;
        }
    };
}