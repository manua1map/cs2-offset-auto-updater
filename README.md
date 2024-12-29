A very simple and lightweight auto updater for Counter Strike 2 offsets. uses a DownloadURL function to get the offsets from a2x's github repository: https://github.com/a2x/cs2-dumper

For best results output address to check if it's valid. Keep in mind it converts the address to hex.

Example usage:

~~~cpp
namespace offsets {
	std::ptrdiff_t dwEntityList = getAddress("dwEntityList", 1); // returns correct address because there is only one result for "dwEntityList"
	// second argument will take either 1 or 2, 1 will download from offsets.hpp, 2 will download from client_dll.hpp
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
