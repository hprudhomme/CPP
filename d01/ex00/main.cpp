# include "zombie.hpp"

int main()
{
    Zombie *zombie1 = newZombie("Patrick");
    randomChump("Bob");
    delete zombie1;

    return 0;
}