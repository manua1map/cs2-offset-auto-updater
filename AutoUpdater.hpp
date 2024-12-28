/*
 
	File: AutoUpdater.hpp
	Desc: auto offset/address updater for Counter-Strike 2. not very reliable, doesn't have a 100% success rate.

*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include "web.h"

// split string into lines
std::vector<std::string> SplitLines(const std::string& data) {
    std::vector<std::string> lines;
    std::istringstream stream(data);
    std::string line;
    while (std::getline(stream, line)) {
        lines.push_back(line);
    }
    return lines;
}

// extract data after the keyword on a line
std::vector<std::string> ExtractLinesWithKeyword(const std::vector<std::string>& lines, const std::string& keyword) {
    std::vector<std::string> results;
    for (const auto& line : lines) {
        size_t pos = line.find(keyword);
        if (pos != std::string::npos) {
            results.push_back(line.substr(pos + keyword.length()));
        }
    }
    return results;
}

std::ptrdiff_t getAddress(std::string addr)
{
    std::vector<std::string> lines = SplitLines(DownloadURL("https://raw.githubusercontent.com/a2x/cs2-dumper/refs/heads/main/output/offsets.hpp"));

    // Extract lines containing address name and get the rest of the line
    std::string keyword = addr;
    std::vector<std::string> results = ExtractLinesWithKeyword(lines, keyword);

    for (const auto& result : results) {
        std::string str1 = ReplaceAll(result, "= ", "");
        std::string str2 = ReplaceAll(str1, ";", "");

        unsigned int hexValue = std::stoul(str2, nullptr, 16);
        return hexValue;
    }

    return 0;
}

std::ptrdiff_t getClientAddress(std::string addr) //very scuffed
{
    std::vector<std::string> lines = SplitLines(DownloadURL("https://raw.githubusercontent.com/a2x/cs2-dumper/refs/heads/main/output/client_dll.hpp"));

    std::string keyword = addr;
    std::vector<std::string> results = ExtractLinesWithKeyword(lines, keyword);

    for (const auto& result : results) {
        std::string str1 = ReplaceAll(result, "= ", "");
        std::string str2 = ReplaceAll(str1, ";", "");
        std::string filtered;

        std::copy_if(str2.begin(), str2.end(), std::back_inserter(filtered),
            [](char c) { return std::isdigit(c) || c == 'X'; });

        std::ptrdiff_t value = static_cast<std::ptrdiff_t>(std::stoll(filtered));
        return value;
    }

}

