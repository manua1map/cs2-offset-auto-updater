/*
    File: web.h
    Author: github.com/xen2cute
*/

#include <string>
#include <windows.h>
#include <wininet.h>
#include <stdexcept>
#pragma comment(lib, "wininet") 

std::string ReplaceAll(const std::string& input, const std::string& target, const std::string& replacement) {
    std::string result = input;
    size_t position = 0;
    while ((position = result.find(target, position)) != std::string::npos) {
        result.replace(position, target.length(), replacement);
        position += replacement.length();
    }
    return result;
}

std::string DownloadURL(const std::string& url) {
    HINTERNET internetSession = nullptr;
    HINTERNET urlHandle = nullptr;
    std::string content;

    try {
        internetSession = InternetOpenA("Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, nullptr, nullptr, 0);
        if (!internetSession) {
            throw std::runtime_error("Failed to initialize internet session.");
        }

        urlHandle = InternetOpenUrlA(internetSession, url.c_str(), nullptr, 0, 0, 0);
        if (!urlHandle) {
            throw std::runtime_error("Failed to open URL.");
        }

        char buffer[2048];
        DWORD bytesRead = 0;
        do {
            if (InternetReadFile(urlHandle, buffer, sizeof(buffer) - 1, &bytesRead) && bytesRead > 0) {
                content.append(buffer, bytesRead);
            }
            else {
                break;
            }
        } while (bytesRead > 0);

    }
    catch (const std::exception& e) {
        MessageBoxA(nullptr, e.what(), "ERROR", MB_ICONERROR);
    }

    if (urlHandle) {
        InternetCloseHandle(urlHandle);
    }
    if (internetSession) {
        InternetCloseHandle(internetSession);
    }

    return ReplaceAll(content, "|n", "\r\n");
}

