# include "zombie.hpp"

int main()
{
    Zombie *zombie1 = newZombie("Patrick");
    randomChump("Bob");
	zombie1->getName();
    delete zombie1;

    return 0;
}
