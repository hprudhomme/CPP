#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>
class Bureaucrat;
# include "Form.hpp"
class Bureaucrat
{

public:

	Bureaucrat( const std::string &name, int grade );
	Bureaucrat( const Bureaucrat &src );
	~Bureaucrat( void );

	Bureaucrat	&operator=( const Bureaucrat &rhs );

	const std::string	&getName( void ) const;
	int					getGrade( void ) const;

    class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};

	void	incrementGrade();
	void	decrementGrade();

	bool	signForm( Form &form ) const ;

	static bool	verbose;

private:

	const std::string	_name;
	int					_grade;

	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;

	Bureaucrat( void );
	void	checkGrade( void ) const ;

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif