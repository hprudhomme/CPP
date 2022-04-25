#include "ScavTrap.hpp"

int main()
{
	ScavTrap	a("A");
	ScavTrap	b("B");
	std::cout << "=========================================" << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.guardGate();
	std::cout << "=========================================" << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "=========================================" << std::endl;
	b.setAttackDamage(60);
	b.attack(a.getName());
	b.takeDamage(b.getAttackDamage());
	b.beRepaired(10);
	std::cout << "=========================================" << std::endl;

	return (0);
}