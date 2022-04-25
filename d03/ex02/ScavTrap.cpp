#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_Hitpoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
	this->_guardGate_mode = false;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	*this = scavtrap;
	std::cout << "<" << this->_Name << "> ScavTrap(derived) copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_Hitpoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
	this->_guardGate_mode = false;
	std::cout << "<" << this->_Name << "> ScavTrap(derived) string constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<" << this->_Name << "> ScavTrap(derived) destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_Name = scavtrap._Name;
	this->_Hitpoint = scavtrap._Hitpoint;
	this->_EnergyPoint = scavtrap._EnergyPoint;
	this->_AttackDamage = scavtrap._AttackDamage;
	this->_guardGate_mode = scavtrap._guardGate_mode;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap [" << this->_Name << "] attack [" << target << "] causing [" << this->_AttackDamage << "] points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_guardGate_mode == false)
		this->_guardGate_mode = true;
	std::cout << "ScavTrap [" << this->_Name << "] has entered the Gate Keeper Mode" << std::endl;
}