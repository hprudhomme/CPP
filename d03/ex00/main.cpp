#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a("A");
	ClapTrap	b("B");

	a.setAttackDamage(5);
	b.setAttackDamage(4);

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());

	b.beRepaired(10);

	return (0);
}
