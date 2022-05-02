#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Name("bob"), _Hitpoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	std::cout << this->_Name <<" default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
	std::cout << claptrap._Name << " copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _Name(name), _Hitpoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	std::cout << this->_Name << " string constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_Name << " destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = claptrap._Name;
	this->_Hitpoint = claptrap._Hitpoint;
	this->_EnergyPoint = claptrap._EnergyPoint;
	this->_AttackDamage = claptrap._AttackDamage;
	return (*this);
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_AttackDamage = amount;
}

unsigned int 	ClapTrap::getAttackDamage()
{
	return (this->_AttackDamage);
}

std::string	ClapTrap::getName()
{
	return (this->_Name);
}

void	ClapTrap::attack(std::string const &target)
{
	this->_EnergyPoint -= 1;
	std::cout << "ClapTrap [" << this->_Name << "] attack [" << target << "], causing ["
				<< this->_AttackDamage << "] points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hitpoint >= amount)
		this->_Hitpoint -= amount;
	else
		this->_Hitpoint = 0;
	std::cout << "ClapTrap [" << this->_Name << "] got damage by [" << amount << "] points. "
			<< "Remaining hit point is: [" << this->_Hitpoint << "]" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoint >= amount)
	{
		this->_EnergyPoint -= 1;
		this->_Hitpoint += amount;
	}
	else
	{
		this->_Hitpoint += this->_EnergyPoint;
		this->_EnergyPoint = 0;
	}
	std::cout << "ClapTrap [" << this->_Name << "] gained [" << amount <<
	"] hit points. Current energy point: [" << this->_EnergyPoint <<"]; " << "Current hit point: [" << this->_Hitpoint << "]" << std::endl;
}

