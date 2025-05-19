/*
    https://github.com/manua1map
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include "Web.h"

inline void closeWeb(URLSession session)
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

uintptr_t getAddress(URLSession session, const std::string& addrName, int fileType)
{
    std::string URL = "https://raw.githubusercontent.com/a2x/cs2-dumper/refs/heads/main/output";
    std::string formattedName = addrName;

    if (fileType == 1)
        URL += "/offsets.hpp";
    else if (fileType == 2)
    {
        URL += "/client_dll.hpp";

        if (addrName.rfind("constexpr std::ptrdiff_t ", 0) != 0)
            formattedName = "constexpr std::ptrdiff_t " + addrName + " = ";
    }

    if (!session.OpenSession() || !session.OpenURL(URL))
        return 0;

    std::vector<std::string> lines = splitLines(session.ReadContent());
    std::vector<std::string> results = extractLines(lines, formattedName);

    for (const auto& result : results) 
    {
        std::string resultStr = ReplaceMultiple(result, { "=", ";" }, "");

        return static_cast<uintptr_t>(std::stoull(resultStr, nullptr, 16));
    }

    return 0;
}
