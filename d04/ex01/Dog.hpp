#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
class Dog : public Animal
{

public:

	Dog( void );
	Dog( const Dog &src );
	virtual ~Dog( void );

	virtual Dog		&operator=( Dog const & rhs );
	virtual Animal	&operator=( const Animal &other );

	virtual void	makeSound( void ) const ;

	virtual Brain	*getBrain( void ) const;

private:

	Brain	*brain;

};

#endif
