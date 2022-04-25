#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string		_Name;
		unsigned int	_Hitpoint;
		unsigned int	_EnergyPoint;
		unsigned int	_AttackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &claptrap);
		~ClapTrap();
		
		ClapTrap &operator=(const ClapTrap &claptrap);

		void	setAttackDamage(unsigned int amount);
		unsigned int		getAttackDamage(void);
		std::string			getName(void);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

#endif