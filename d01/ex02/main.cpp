#include <string>
#include <iostream>

int		main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainPtr = &brain;
	std::string &brainRef = brain;

	std::cout << "Original string address: " << &brain << std::endl;
	std::cout << "brainPtr: " << &(*brainPtr) << std::endl;
	std::cout << "brainRef: " << &brainRef << std::endl;
	std::cout << "Original string: " << brain << std::endl;
	std::cout << "brainPtr: " << *brainPtr << std::endl;
	std::cout << "brainRef: " << brainRef << std::endl;
}