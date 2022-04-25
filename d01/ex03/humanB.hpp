#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

# include <string>

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon &w);

	private:
		std::string _name;
		Weapon *_weapon;
};

#endif