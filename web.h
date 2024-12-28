#include <Windows.h>
#include <WinINet.h>
#include <string>
#pragma comment(lib, "wininet") 
std::string ReplaceAll(std::string subject, const std::string& search,
    const std::string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
        subject.replace(pos, search.length(), replace);
        pos += replace.length();
    }
    return subject;
}

std::string DownloadURL(const char* URL) {
    try
    {
        HINTERNET interwebs = InternetOpenA("Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, NULL);
        HINTERNET urlFile;
        std::string rtn;
        if (interwebs) {
            urlFile = InternetOpenUrlA(interwebs, URL, NULL, NULL, NULL, NULL);
            if (urlFile) {
                char buffer[2000];
                DWORD bytesRead;
                do {
                    InternetReadFile(urlFile, buffer, 2000, &bytesRead);
                    rtn.append(buffer, bytesRead);
                    memset(buffer, 0, 2000);
                } while (bytesRead);
                InternetCloseHandle(interwebs);
                InternetCloseHandle(urlFile);
                std::string p = ReplaceAll(rtn, "|n", "\r\n");
                return p;
            }
        }
        if (interwebs != 0)
            InternetCloseHandle(interwebs);
        std::string p = ReplaceAll(rtn, "|n", "\r\n");
        return p;
    }
    catch (std::exception err) { MessageBoxA(0, err.what(), "ERROR", 0); }
}
