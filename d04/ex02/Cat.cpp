#include "Cat.hpp"
Cat::Cat( void ) : AAnimal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default constructor for Cat called" << std::endl;
	return;
}

Cat::Cat( Cat const & src ) : AAnimal(src)
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

AAnimal	&Cat::operator=( AAnimal const &rhs )
{
	delete this->brain;
	std::cout << "AAnimal Assignement operator for Cat called" << std::endl;
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
