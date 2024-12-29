a very simple, lightweight and unreliable auto updater for cs2 offsets. uses a downloadurl function to get the offsets from a2x's github repository. 

usage example:

~~~
namespace offset {
	std::ptrdiff_t dwEntityList = getAddress("dwEntityList"); // will work because there is only one result for "dwEntityList"
}
~~~
however when using getClientAddress, there will likely be multiple matches for the address name, so you will have to be more specific:
~~~
namespace offset {
  std::ptrdiff_t m_vOldOrigin = getClientAddress("m_vOldOrigin"); // wont work
  std::ptrdiff_t m_iHealth = getClientAddress("m_iHealth"); // wont work

	std::ptrdiff_t m_vOldOrigin = getClientAddress("constexpr std::ptrdiff_t m_vOldOrigin = "); // will work
  std::ptrdiff_t m_iHealth = getClientAddress("constexpr std::ptrdiff_t m_iHealth = "); // will work
~~~
