#include "Cat.hpp"
Cat::Cat( void ) : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default constructor for Cat called" << std::endl;
	return;
}

Cat::Cat( Cat const & src ) : Animal(src)
{
	std::cout << "Copy constructor for Cat called" << std::endl;
	this->brain = new Brain(*src.brain);
	return;
}

Cat::~Cat( void )
{
	delete this->brain;
	std::cout << "Destructor for Cat called" << std::endl;
	return;
}

Cat		&Cat::operator=( Cat const &rhs )
{
	delete this->brain;
	std::cout << "Assignement operator for Cat called" << std::endl;
	this->type = rhs.getType();
	this->brain = new Brain(*rhs.getBrain());
	return *this;
}

Animal	&Cat::operator=( Animal const &rhs )
{
	delete this->brain;
	std::cout << "Animal Assignement operator for Cat called" << std::endl;
	this->type = rhs.getType();
	this->brain = new Brain(*rhs.getBrain());
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeeeeeow" << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->brain);
}
