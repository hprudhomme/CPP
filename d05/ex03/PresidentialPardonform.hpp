#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"
class PresidentialPardonForm : public Form
{

public:

	PresidentialPardonForm( const std::string &target );
	PresidentialPardonForm( const PresidentialPardonForm &src );
	~PresidentialPardonForm( void );

	PresidentialPardonForm	&operator=( const PresidentialPardonForm &rhs );

	const std::string	&getTarget( void ) const;
	virtual void		execute( const Bureaucrat &executor ) const;

	static bool	verbose;

private:

	const std::string		_target;

	PresidentialPardonForm( void );

};

#endif