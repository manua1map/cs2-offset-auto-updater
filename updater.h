#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "web.h"

namespace updater
{
    inline const bool print_addr = false;
    inline int total_succeeded = 0;
    inline int total_scanned = 0;

    #define FILE_OFFSETS 1
    #define FILE_CLIENTDLL 2

    inline void CloseWeb(web::URLSession session)
    {
        session.CloseURL();
        session.CloseSession();
    }

    inline std::vector<std::string> SplitLines(const std::string& data)
    {
        std::vector<std::string> lines;
        std::istringstream stream(data);
        std::string line;
        while (std::getline(stream, line))
        {
            lines.push_back(line);
        }

        return lines;
    }

    inline std::vector<std::string> ExtractLines(const std::vector<std::string>& lines, const std::string& word)
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

    uintptr_t GetAddress(web::URLSession session, const std::string& addrName, int fileType)
    {
        std::string output_url = "https://raw.githubusercontent.com/a2x/cs2-dumper/refs/heads/main/output";
        std::string formatted_name = addrName;

        total_scanned += 1;

        if (fileType == FILE_OFFSETS)
            output_url += "/offsets.hpp";
        else if (fileType == FILE_CLIENTDLL)
        {
            output_url += "/client_dll.hpp";

            if (addrName.rfind("constexpr std::ptrdiff_t ", 0) != 0)
                formatted_name = "constexpr std::ptrdiff_t " + addrName + " = ";
        }

        if (!session.OpenSession() || !session.OpenURL(output_url))
            return 0;

        std::vector<std::string> lines = SplitLines(session.ReadContent());
        std::vector<std::string> results = ExtractLines(lines, formatted_name);

        for (const auto& result : results)
        {
            std::string result_str = web::ReplaceMultiple(result, { "=", ";" }, "");
            uintptr_t result_addr = static_cast<uintptr_t>(std::stoull(result_str, nullptr, 16));

            if (result_addr)
            {
                total_succeeded += 1;

                if(print_addr)
                    std::cout << "[>>] " << addrName << " -> 0x" << std::hex << result_addr << std::dec << "\n";

                return result_addr;
            }
        }

        if (print_addr)
            std::cout << "[>>] " << addrName << " is invalid\n";

        return 0;
    }
}
