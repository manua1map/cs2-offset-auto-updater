A very simple and lightweight auto updater for Counter Strike 2 offsets. uses a DownloadURL function to get the offsets from a2x's github repository: https://github.com/a2x/cs2-dumper

For best results output address to check if it's valid. Keep in mind it converts the address to hex.

getAddress function takes 2 arguments, address name and URL Index. Address name must be from a2x github repository, URL Index ranges from 1 and 2, 1 will download offsets.hpp, 2 will download client_dll.hpp.

Example usage:
~~~cpp
namespace offsets {
	std::ptrdiff_t dwEntityList = getAddress("dwEntityList", 1); // returns correct address because there is only one result for "dwEntityList"
}
~~~
however when using client_dll, there will likely be multiple matches for the address name, so you will have to be more specific.

Example of **incorrect** usage when using client_dll:
~~~cpp
namespace client_dll {
	std::ptrdiff_t m_iHealth = getClientAddress("m_iHealth", 2); // returns 0
}
~~~
Example of **correct** usage:
~~~cpp
namespace client_dll {
	std::ptrdiff_t m_iHealth = getClientAddress("constexpr std::ptrdiff_t m_iHealth = ", 2); // returns correct address
}
~~~
