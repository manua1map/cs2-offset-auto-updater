/*
    File: AutoUpdater.hpp
    Author: github.com/xen2cute
    Desc: Auto offset/address updater for Counter-Strike 2. May not correctly obtain all addresses, for best results output the address and make sure it is valid, all addresses are converted to decimal.
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include "web.h"

std::string uRL;

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

    std::vector<std::string> lines = SplitLines(DownloadURL(uRL.c_str()));

    std::string aaa = addrName;
    std::vector<std::string> results = ExtractLines(lines, aaa);

    for (const auto& result : results) {
        std::string str1 = ReplaceAll(result, "= ", "");
        str1 = ReplaceAll(str1, ";", "");

        unsigned int hexValue = std::stoul(str1, nullptr, 16);
        return hexValue;
    }

    return 0;
}
