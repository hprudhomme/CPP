#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"
class RobotomyRequestForm : public Form
{

public:

	RobotomyRequestForm( const std::string &target );
	RobotomyRequestForm( const RobotomyRequestForm &src );
	~RobotomyRequestForm( void );

	RobotomyRequestForm	&operator=( const RobotomyRequestForm &rhs );

	const std::string	&getTarget( void ) const;
	virtual void		execute( const Bureaucrat &executor ) const;

	static bool	verbose;

private:

	const std::string		_target;

	RobotomyRequestForm( void );

};

#endif