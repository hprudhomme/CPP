#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_Hitpoint = 100;
	this->_EnergyPoint = 100;
	this->_AttackDamage = 30;
	std::cout << "<" << this->_Name << "> FragTrap(derived) default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_Hitpoint = 100;
	this->_EnergyPoint = 100;
	this->_AttackDamage = 30;
	std::cout << this->_Name << " FragTrap(derived) string constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	*this = fragtrap;
	std::cout << this->_Name << " FragTrap(derived) copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->_Name << " FragTrap(derived) destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragtrap)
{
	this->_Name = fragtrap._Name;
	this->_Hitpoint = fragtrap._Hitpoint;
	this->_EnergyPoint = fragtrap._EnergyPoint;
	this->_AttackDamage = fragtrap._AttackDamage;
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap [" << this->_Name << "] attack [" << target << "] causing [" << this->_AttackDamage << "] points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap [" << this->_Name << "] Let's high five ! " << std::endl;
}
