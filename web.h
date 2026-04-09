#include <string>
#include <windows.h>
#include <wininet.h>
#pragma comment(lib, "wininet") 

namespace web
{
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

    inline std::string ReplaceMultiple(const std::string& input, const std::vector<std::string>& targets, const std::string& replacement)
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
        HINTERNET internet_session;
        HINTERNET url_handle;

    public:
        URLSession() : internet_session(nullptr), url_handle(nullptr) {}

        bool OpenSession(const std::string& userAgent = "Mozilla/5.0")
        {
            internet_session = InternetOpenA(userAgent.c_str(), INTERNET_OPEN_TYPE_DIRECT, nullptr, nullptr, 0);
            return internet_session != nullptr;
        }

        bool OpenURL(const std::string& url)
        {
            if (!internet_session) 
                return false;

            url_handle = InternetOpenUrlA(internet_session, url.c_str(), nullptr, 0, 0, 0);
            return url_handle != nullptr;
        }

        std::string ReadContent()
        {
            std::string content;
            if (!url_handle)
                return content;

            char buffer[2048];
            DWORD bytesRead = 0;

            while (InternetReadFile(url_handle, buffer, sizeof(buffer) - 1, &bytesRead) && bytesRead > 0)
            {
                content.append(buffer, bytesRead);
            }

            return ReplaceAll(content, "|n", "\r\n");
        }

        void CloseURL()
        {
            if (url_handle)
            {
                InternetCloseHandle(url_handle);
                url_handle = nullptr;
            }
        }

        void CloseSession()
        {
            if (internet_session)
            {
                InternetCloseHandle(internet_session);
                internet_session = nullptr;
            }
        }

        ~URLSession()
        {
            CloseURL();
            CloseSession();
        }
    };

}
