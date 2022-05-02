#include "zombie.hpp"

Zombie::Zombie()
{   
   return ;
}

Zombie::Zombie(std::string n): name(n)
{   
    this->announce();
}

Zombie::~Zombie()
{
    std::cout <<this->name << " is dead !" << std::endl;
}

bool	Zombie::setName( std::string newName )
{
	if (newName == "")
		return (false);
	this->name = newName;
	return (true);
}

std::string Zombie::getName(void)
{
    std::cout << "Name  : " << this->name << std::endl;
    return (this->name);
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}