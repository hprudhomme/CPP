#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{

public:

	Form( const std::string &name, int gradeToSign, int gradeToExecute );
	Form( const Form &src );
	virtual ~Form( void );

	Form	&operator=( const Form &rhs );

	const std::string	&getName( void ) const;
	int					getSignGrade( void ) const;
	int					getExecuteGrade( void ) const;
	bool				isSigned( void ) const;

	void			checkGrades( void ) const;
	bool			beSigned( const Bureaucrat &bureaucrat );
	virtual void	execute( const Bureaucrat &executor ) const = 0;
	void			checkExecutability( const Bureaucrat &executor ) const;

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};

	class CantExecuteForm : public std::exception
	{
		virtual const char* what() const throw();
	};

	static bool	verbose;

private:

	Form( void );

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;

};

std::ostream	&operator<<( std::ostream &ostr, const Form &instance );

#endif