#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"
class Animal
{

public:

	Animal( void );
	Animal( const Animal &src );
	virtual ~Animal( void );

	virtual Animal		&operator=( const Animal &other ); // virtual

	virtual void		makeSound( void ) const ;

	const std::string	&getType( void ) const ;

	virtual Brain		*getBrain( void ) const = 0;

protected:

	std::string type;

private:

};

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance );

#endif
