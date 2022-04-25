#include "WrongCat.hpp"
WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << "Default constructor for WrongCat called" << std::endl;
	return;
}

WrongCat::WrongCat( WrongCat const & src )
{
	std::cout << "Copy constructor for WrongCat called" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat( void )
{
	std::cout << "Destructor for WrongCat called" << std::endl;
	return;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meeeeeeeow"
		<< std::endl;
}