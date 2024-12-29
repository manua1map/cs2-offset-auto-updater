/*
 
	File: AutoUpdater.hpp
 	Author: github.com/xen2cute
	Desc: Auto offset/address updater for Counter-Strike 2. May not correctly obtain all addresses, for best results output the address and make sure it is valid.
   
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include "web.h"

std::vector<std::string> SplitLines(const std::string& data) {
    std::vector<std::string> lines;
    std::istringstream stream(data);
    std::string line;
    while (std::getline(stream, line)) {
        lines.push_back(line);
    }
    return lines;
}

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


std::ptrdiff_t getAddress(std::string addrName)
{
    std::vector<std::string> lines = SplitLines(DownloadURL("https://raw.githubusercontent.com/a2x/cs2-dumper/refs/heads/main/output/offsets.hpp"));

    std::string keyword = addrName;
    std::vector<std::string> results = ExtractLinesWithKeyword(lines, keyword);

    for (const auto& result : results) {
        std::string str1 = ReplaceAll(result, "= ", "");
        std::string str2 = ReplaceAll(str1, ";", "");

        unsigned int hexValue = std::stoul(str2, nullptr, 16);
        return hexValue;
    }

    return 0;
}


std::ptrdiff_t getClientAddress(std::string addrName)
{
    std::vector<std::string> lines = SplitLines(DownloadURL("https://raw.githubusercontent.com/a2x/cs2-dumper/refs/heads/main/output/client_dll.hpp"));

    std::string keyword = addrName;
    std::vector<std::string> results = ExtractLinesWithKeyword(lines, keyword);

    for (const auto& result : results) {
        std::string str1 = ReplaceAll(result, "= ", "");
        std::string str2 = ReplaceAll(str1, ";", "");

        str2 = ReplaceAll(str2, "// int32", "");
        str2 = ReplaceAll(str2, "// uint8", "");
        str2 = ReplaceAll(str2, "// uint32", "");
        str2 = ReplaceAll(str2, "// Vector", "");
        str2 = ReplaceAll(str2, "// CHandle<C_CSPlayerPawn>", "");

        unsigned int hexValue = std::stoul(str2, nullptr, 16);
        return hexValue;
    }

}
