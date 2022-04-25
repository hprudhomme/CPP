#include "AAnimal.hpp"
AAnimal::~AAnimal( void )
{
	std::cout << "Destructor for AAnimal called" << std::endl;
	return;
}

const std::string	&AAnimal::getType( void ) const
{
	return (this->type);
}