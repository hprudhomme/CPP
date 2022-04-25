#include "Brain.hpp"
Brain::Brain( void )
{
	std::cout << "Default constructor for Brain called" << std::endl;
	return;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Copy constructor for Brain called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain( void )
{
	std::cout << "Destructor for Brain called" << std::endl;
	return;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	std::cout << "Assignement operator for Brain called" << std::endl;
	for (int i = 0; i < Brain::numberOfIdeas; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}