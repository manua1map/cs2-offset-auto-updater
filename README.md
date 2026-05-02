A very simple and lightweight auto offset updater that can used for any game both externally and internally. It works by downloading the URL contents of the offsets on [a2x's dumper github repository](https://github.com/a2x/cs2-dumper).

I recommend you output each address ensuring it's correct, you can do so by changing ```print_addr``` in updater.h to true.

```GetAddress``` takes 2 arguments, address name and file type. Address name must be from a2x github repository, file type 1 will read from offsets.hpp, 2 will read from client_dll.hpp.

## Example usage is provided in example.cpp