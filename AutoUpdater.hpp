/*
    https://github.com/t0ughknuckles
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include "Web.hpp"

std::string uRL;

void closeWeb(URLSession session)
{
    session.CloseURL();
    session.CloseSession();
}

inline std::vector<std::string> splitLines(const std::string& data)
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

inline std::vector<std::string> extractLines(const std::vector<std::string>& lines, const std::string& word)
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

std::ptrdiff_t getAddress(URLSession session, std::string addrName, int url)
{
    uRL = "https://raw.githubusercontent.com/a2x/cs2-dumper/refs/heads/main/output";

    if (url == 1)
        uRL = uRL + "/offsets.hpp";
    else if (url == 2)
        uRL = uRL + "/client_dll.hpp";
   
    if (!session.OpenSession())
        std::cout << "Failed to open session." << std::endl;

    if (!session.OpenURL(uRL))
        std::cout << "Failed to open URL." << std::endl;

    std::vector<std::string> lines = splitLines(session.ReadContent());
    std::vector<std::string> results = extractLines(lines, addrName);

    for (const auto& result : results) {
        std::string str1;
        str1 = ReplaceAll(result, "=", "");
        str1 = ReplaceAll(str1, ";", "");

        unsigned int decValue = std::stoul(str1, nullptr, 16);
        return decValue;
    }

    return 0;
}
