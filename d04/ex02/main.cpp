#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define NUMBER_OF_ANIMALS 8

int	main( void )
{
	AAnimal	*animals[NUMBER_OF_ANIMALS];
	Brain	*brain;

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i < NUMBER_OF_ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	brain = animals[7]->getBrain();
	brain->ideas[0] = "I'm hungry";
	brain->ideas[1] = "That's a strange idea I'm having";
	brain->ideas[2] = "Ball!!!!!";
	brain->ideas[3] = "Squirrel!!!!!";

	std::cout << "animal 7"<< std::endl;
	std::cout << animals[7]->getBrain()->ideas[0] << std::endl;
	std::cout << animals[7]->getType() << std::endl;

	std::cout << "copy animal 7"<< std::endl;
	Cat copy(*(Cat *)animals[7]);
	std::cout << copy.getBrain()->ideas[3] << std::endl;
	std::cout << animals[7]->getType() << std::endl;

	std::cout << "copy animal 5=7"<< std::endl;
	*(animals[5]) = *(animals[7]);
	std::cout << animals[5]->getBrain()->ideas[2] << std::endl;
	std::cout << animals[7]->getType() << std::endl;

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];
}
