#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* dog = new Dog();
const Animal* cat = new Cat();
std::cout << dog->getType() << " " << std::endl;
std::cout << cat->getType() << " " << std::endl;
cat->makeSound(); //will output the cat sound!
dog->makeSound();
meta->makeSound();

delete meta;
delete cat;
delete dog;

const WrongAnimal* wrongmeta = new WrongAnimal();
const WrongAnimal* wrongcat = new WrongCat();

wrongcat->makeSound();
wrongmeta->makeSound();

delete wrongmeta;
delete wrongcat;

return 0;

}