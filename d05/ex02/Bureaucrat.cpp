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

void	Bureaucrat::incrementGrade( int quantity )
{
	if (Bureaucrat::verbose)
		std::cout << "incrementGrade from Bureaucrat called with value "
			<< quantity << std::endl;
	this->_grade -= quantity;
	checkGrade();
}

void	Bureaucrat::decrementGrade( int quantity )
{
	if (Bureaucrat::verbose)
		std::cout << "decrementGrade from Bureaucrat called with value "
			<< quantity << std::endl;
	this->_grade += quantity;
	checkGrade();
}

bool	Bureaucrat::signForm( Form &form ) const
{
	if (form.isSigned())
	{
		std::cout << "already sign" << std::endl;
		return false;
	}
	if (form.beSigned(*this))
	{
		std::cout << this->_name << " signs form " << form.getName()
			<< std::endl;
		return true;
	}
	else
	{
		std::cout << this->_name << " cannot sign form " << form.getName()
			<< " because their grade is not high enough" << std::endl;
		throw Form::GradeTooLowException();
		return false;
	}
}

void	Bureaucrat::checkGrade( void ) const
{
	if (this->_grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
}

bool	Bureaucrat::executeForm( const Form &form ) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes form " << form.getName()
			<< std::endl;
		return true;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
		return false;
	}
}

std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & instance)
{
	ostr << instance.getName() << ", Bureaucrat grade " << instance.getGrade();
	return ostr;
}

bool	Bureaucrat::verbose = false;
