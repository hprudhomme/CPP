# include "zombie.hpp"

Zombie	*zombiehorde( int numberOfZombies, std::string name )
{
	Zombie	*zombieHorde = new Zombie[numberOfZombies];

	for (int i = 0; i < numberOfZombies; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}

void	announceAllZombies( Zombie *zombieHorde, size_t numberOfZombies)
{
	for (size_t i = 0; i < numberOfZombies; i++)
	{
		zombieHorde[i].announce();
	}
}

int main()
{
    Zombie *zombieHorde;

    zombieHorde = zombiehorde(4, "Bob");
    announceAllZombies(zombieHorde, 4);
    delete [] zombieHorde;
    return 0;
}
