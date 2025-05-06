/*
    https://github.com/t0ughknuckles
*/


#include <iostream>
#include <string>
#include <windows.h>
#include <wininet.h>
#include <stdexcept>
#pragma comment(lib, "wininet") 
#define URLSESSION_H

inline std::string ReplaceAll(const std::string& input, const std::string& target, const std::string& replacement) 
{
    std::string result = input;
    size_t position = 0;
    while ((position = result.find(target, position)) != std::string::npos) 
    {
        result.replace(position, target.length(), replacement);
        position += replacement.length();
    }
    
    return result;
}

inline std::string ReplaceArray(const std::string& input, const std::vector<std::string>& targets, const std::string& replacement) 
{
    std::string result = input;
    for (const auto& target : targets) 
    {
        result = ReplaceAll(result, target, replacement);
    }

    return result;
}

class URLSession {
private:
    HINTERNET internetSession;
    HINTERNET urlHandle;

public:
    URLSession() : internetSession(nullptr), urlHandle(nullptr) {}

    bool OpenSession(const std::string& userAgent = "Mozilla/5.0") 
    {
        internetSession = InternetOpenA(userAgent.c_str(), INTERNET_OPEN_TYPE_DIRECT, nullptr, nullptr, 0);
        return internetSession != nullptr;
    }

    bool OpenURL(const std::string& url) 
    {
        if (!internetSession) return false;
        urlHandle = InternetOpenUrlA(internetSession, url.c_str(), nullptr, 0, 0, 0);
        return urlHandle != nullptr;
    }

    std::string ReadContent() 
    {
        std::string content;
        if (!urlHandle) return content;

        char buffer[2048];
        DWORD bytesRead = 0;

        while (InternetReadFile(urlHandle, buffer, sizeof(buffer) - 1, &bytesRead) && bytesRead > 0) 
        {
            content.append(buffer, bytesRead);
        }

        return ReplaceAll(content, "|n", "\r\n");
    }

    void CloseURL() 
    {
        if (urlHandle) 
        {
            InternetCloseHandle(urlHandle);
            urlHandle = nullptr;
        }
    }

    void CloseSession()
    {
        
        if (internetSession) 
        {
            InternetCloseHandle(internetSession);
            internetSession = nullptr;
        }
    }

    ~URLSession() 
    {
        CloseURL();
        CloseSession();
    }
};

