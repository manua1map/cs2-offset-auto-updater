#include <iostream>
#include <Windows.h>
#include <string>

#include "AutoUpdater.hpp"

int main()
{
	std::vector<std::string> addr1Array = { "dwCSGOInput", "dwEntityList" }; // offsets.hpp: each address only returns 1 result making no need to specify further than the address name.
	std::vector<std::string> addr2Array = { "std::ptrdiff_t m_flDuckOffset", "std::ptrdiff_t m_nDuckTimeMsecs" }; // client_dll.hpp: to ensure finding the correct data we be more specific with the addr name
	for (int i = 0; i < addr1Array.size(); i++)
		std::cout << "offsets.hpp: " << addr1Array[i] << " | " << getAddress(addr1Array[i], 1) << std::endl;

	for (int i = 0; i < addr2Array.size(); i++)
		std::cout << "client_dll.hpp: " << addr2Array[i] << " | " << getAddress(addr2Array[i], 2) << std::endl; 

	closeWeb(session); // close the internet handle when we're done with it, rather than opening and closing it everytime the getAddr function is used.
	Sleep(-1);

	return 0;
}
