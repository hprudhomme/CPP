#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "SchrubberyCreationForm.hpp"
class Intern
{

public:

	Intern( void );
	Intern( const Intern &src );
	~Intern( void );

	Intern	&operator=( const Intern &rhs );

	Form	*makeForm(const std::string &formName, const std::string &target) const;

	static bool	verbose;

private:

	typedef struct	s_formList
	{
		std::string	formName;
		Form		*formType;
	}				t_formList;
};

std::ostream	&operator<<( std::ostream &ostr, const Intern &instance );

#endif