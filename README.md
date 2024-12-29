A very simple and lightweight auto updater for cs2 offsets. uses a DownloadURL function to get the offsets from a2x's github repository. 

Example usage:

~~~cpp
namespace offset {
	std::ptrdiff_t dwEntityList = getAddress("dwEntityList"); // returns correct address because there is only one result for "dwEntityList"
}
~~~
however when using getClientAddress, there will likely be multiple matches for the address name, so you will have to be more specific.

Example of incorrect usage when using getClientAddress:
~~~cpp
namespace offset {
	std::ptrdiff_t m_vOldOrigin = getClientAddress("m_vOldOrigin"); // returns 0
	std::ptrdiff_t m_iHealth = getClientAddress("m_iHealth"); // returns 0
}
~~~
Example of correct usage:
~~~cpp
namespace offset {
        std::ptrdiff_t m_vOldOrigin = getClientAddress("constexpr std::ptrdiff_t m_vOldOrigin = "); // returns correct address
	std::ptrdiff_t m_iHealth = getClientAddress("constexpr std::ptrdiff_t m_iHealth = "); // returns correct address
}
~~~
