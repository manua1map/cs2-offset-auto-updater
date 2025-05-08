A very simple and lightweight auto offset updater that can used for any game. It works by downloading the URL contents from the offsets on a2x github repository: https://github.com/a2x/cs2-dumper

I recommend you output each address ensuring its correct, and keep in mind all addresss are converted to decimal.

```getAddress``` function takes 3 arguments: URL session, address name and file type. Address name must be from a2x github repository, file type 1 will read from offsets.hpp, 2 will read from client_dll.hpp.

Example usage:
~~~cpp
int main()
{
    /* create a new URL session */
    URLSession session; 

    /* declare offset variables for later use */
    uintptr_t dwEntityList       = getAddress(session, "dwEntityList", 1);
    uintptr_t dwGlowManager      = getAddress(session, "dwGlowManager", 1);
    uintptr_t m_iHealth          = getAddress(session, "m_iHealth", 2);
    uintptr_t m_skeletonInstance = getAddress(session, "m_skeletonInstance", 2);

    /* delay to ensure every address is obtained before closing the session */
    std::this_thread::sleep_for(std::chrono::milliseconds(25));

    /* close URL session */
    closeWeb(session);

    /* output each address */
    std::cout << "dwEntityList "       << dwEntityList << std::endl;
    std::cout << "dwGlowManager "      << dwGlowManager << std::endl;
    std::cout << "m_iHealth "          << m_iHealth << std::endl;
    std::cout << "m_skeletonInstance " << m_skeletonInstance << std::endl;

    return 0;
}
