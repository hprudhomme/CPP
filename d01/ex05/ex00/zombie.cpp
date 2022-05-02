#include "zombie.hpp"

Zombie::Zombie(std::string n): name(n)
{   
    this->announce();
}

Zombie::~Zombie()
{
    std::cout << this->name << " is dead !" << std::endl;
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