#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
class Fixed
{

public:

	Fixed( void );
	Fixed( const int value );
	Fixed( const float value );
	Fixed( const Fixed &src );
	~Fixed( void );

	Fixed	&operator=( const Fixed &other );

	int		toInt( void ) const;
	float	toFloat( void ) const;

	int		getRawBits( void ) const;
	void	setRawBits( const int raw );

	static void	setVerbose( bool value );
	static bool	getVerbose( void );

private:

	int					_fixed_point_value;

	static const int	_number_of_fractional_bits = 8;
	static bool			_verbose;

	int					ft_pow(int val, int pow);

};

std::ostream	&operator<<( std::ostream &ostream, const Fixed &myClass );
int				ft_pow(int val, int pow);

#endif