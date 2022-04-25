#include "Dog.hpp"
Dog::Dog( void )
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default constructor for Dog called" << std::endl;
	return;
}

Dog::Dog( Dog const & src )
{
	std::cout << "Copy constructor for Dog called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog( void )
{
	delete this->brain;
	std::cout << "Destructor for Dog called" << std::endl;
	return;
}

Dog		&Dog::operator=( Dog const & rhs )
{
	std::cout << "Assignement operator for Dog called" << std::endl;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

Animal	&Dog::operator=( Animal const &rhs )
{
	std::cout << "Animal Assignement operator for Dog called" << std::endl;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouf!" << std::endl;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->brain);
}