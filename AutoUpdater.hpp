/*
    File: AutoUpdater.hpp
    Author: github.com/t0ughknuckles
    Desc: Auto offset/address updater for Counter-Strike 2. May not correctly obtain all addresses, for best results output the address and make sure it is valid, all addresses are converted to decimal.
    After use of the getAddress function, it is important to call the closeWeb() function.
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include "web.h"

std::string uRL;
URLSession session;

std::vector<std::string> SplitLines(const std::string& data) {
    std::vector<std::string> lines;
    std::istringstream stream(data);
    std::string line;
    while (std::getline(stream, line)) {
        lines.push_back(line);
    }
    return lines;
}

std::vector<std::string> ExtractLines(const std::vector<std::string>& lines, const std::string& word) {
    std::vector<std::string> results;
    for (const auto& line : lines) {
        size_t pos = line.find(word);
        if (pos != std::string::npos) {
            results.push_back(line.substr(pos + word.length()));
        }
    }
    return results;
}

std::ptrdiff_t getAddress(std::string addrName, int url)
{
    uRL = "https://raw.githubusercontent.com/a2x/cs2-dumper/refs/heads/main/output";

    if (url == 1)
        uRL = uRL + "/offsets.hpp";
    else if (url == 2)
        uRL = uRL + "/client_dll.hpp";

    if (!session.OpenSession()) 
        std::cerr << "Failed to open session." << std::endl;

    if (!session.OpenURL(uRL))
        std::cerr << "Failed to open URL." << std::endl;

    std::vector<std::string> lines = SplitLines(session.ReadContent());
    std::vector<std::string> results = ExtractLines(lines, addrName);

    for (const auto& result : results) {
        std::string str1 = ReplaceAll(result, "= ", "");
        str1 = ReplaceAll(str1, ";", "");
        unsigned int decValue = std::stoul(str1, nullptr, 16); // convert str1 to a decimal value
        return decValue;
    }

    return 0;
}

inline void closeWeb(URLSession s)
{
    s.CloseSession();
    s.CloseURL();
}
