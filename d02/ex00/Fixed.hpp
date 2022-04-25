#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
class Fixed
{

public:

	Fixed( void );
	Fixed( const Fixed &src );
	~Fixed( void );

	Fixed	&operator=( const Fixed &other );

	int		getRawBits( void ) const;
	void	setRawBits( const int raw );

private:

	int					_fixed_point_value;
	static const int	_number_of_fractional_bits = 8;
};

#endif