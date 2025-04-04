A very simple and lightweight auto offset updater that can used for any game. It works by downloading the URL contents from the offsets on a2x's github repository: https://github.com/a2x/cs2-dumper

I recommend you output each address ensuring its correc, and keep in mind all addresss are converted to decimal.

getAddress function takes 2 arguments, address name and URL index. Address name must be from a2x github repository, URL index ranges from 1 & 2, 1 will read from offsets.hpp, 2 will read from client_dll.hpp.

Example usage:
~~~cpp
int main() { 
	std::vector<std::string> addrArray = { "dwEntityList", "dwViewMatrix" };

	for(int i = 0; i < addrArray.size(); i++)
	{
		std::cout << addrArray[i] << ": " << getAddress(addrArray[i], 1) << std::endl; // output each address in decimal
	}

	closeWeb(session);
	return 0;
}
~~~
However when using client_dll, there will likely be multiple matches for the address name, so you will have to be more specific.

Example of **incorrect** usage when using client_dll:
~~~cpp
namespace client_dll {
	std::ptrdiff_t m_iHealth = getAddress("m_iHealth", 2); // returns 0
}
~~~
Example of **correct** usage:
~~~cpp
namespace client_dll {
	std::ptrdiff_t m_iHealth = getAddress("constexpr std::ptrdiff_t m_iHealth = ", 2); // returns correct address
}
~~~
