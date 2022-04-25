#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat( void ): _name(""), _grade(Bureaucrat::lowestGrade)
{
	if (Bureaucrat::verbose)
		std::cout << "Default constructor for Bureaucrat called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( const std::string &name, int grade ): _name(name),
	_grade(grade)
{
	checkGrade();
	if (Bureaucrat::verbose)
		std::cout << "Standard constructor for Bureaucrat called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
	if (Bureaucrat::verbose)
		std::cout << "Copy constructor for Bureaucrat called" << std::endl;
	*this = src;
	return;
}

Bureaucrat::~Bureaucrat( void )
{
	if (Bureaucrat::verbose)
		std::cout << "Destructor for Bureaucrat called" << std::endl;
	return;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	this->_grade = rhs._grade;
	std::cout << "Name is const and can't be overwritten, only grade was copied"
		<< std::endl;
	if (Bureaucrat::verbose)
		std::cout << "Assignement operator for Bureaucrat called" << std::endl;
	return *this;
}

const std::string	&Bureaucrat::getName( void ) const
{
	return this->_name;
}

int	Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade()
{
	if (Bureaucrat::verbose)
		std::cout << "incrementGrade from Bureaucrat called"<< std::endl;
	this->_grade -= 1;
	checkGrade();
}

void	Bureaucrat::decrementGrade()
{
	if (Bureaucrat::verbose)
		std::cout << "decrementGrade from Bureaucrat caled"<< std::endl;
	this->_grade += 1;
	checkGrade();
}

void	Bureaucrat::checkGrade( void ) const
{
	if (this->_grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.getName() << " (Grade " << bureaucrat.getGrade() << ")";
	return (out);
}

bool	Bureaucrat::verbose = false;
