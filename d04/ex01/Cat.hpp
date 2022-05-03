#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
class Cat : public Animal
{

public:

	Cat( void );
	Cat( const Cat &src );
	virtual ~Cat( void );

	virtual Cat				&operator=( Cat const & rhs );
	virtual Animal	&operator=( const Animal &other );

	virtual void	makeSound( void ) const ;

	virtual Brain	*getBrain( void ) const;

private:

	Brain	*brain;

};

#endif
