#include <string>
#include <iostream>

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name) {}
HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &w)
{
	this->_weapon = &w;
}

void HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType()
		<< std::endl;
}