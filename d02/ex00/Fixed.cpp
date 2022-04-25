#include "Fixed.hpp"

Fixed::Fixed( void ): _fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

// Assignement operator overload
Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_point_value = rhs._fixed_point_value;
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits( const int raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point_value = raw;
}