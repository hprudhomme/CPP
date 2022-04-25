#include "Fixed.hpp"
int main( void ) {
	Fixed a;
	std::cout << a.getRawBits() << std::endl;

	a.setRawBits(21.5);
	std::cout << a.getRawBits() << std::endl;

	Fixed b( a );
	std::cout << b.getRawBits() << std::endl;

	b.setRawBits(42);
	Fixed c;
	c = b;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}