#include "contact.hpp"
#include "phonebook.hpp"

int
	main(void)
{
	// int             contact_index;
    Phonebook		fb;
	bool run;
	std::string command;

	run = true;
	fb.setIndex();
	std::cout << "# ANNUAIRE" << std::endl;
	std::cout << "# Enter your command [HELP, ADD, SEARCH, EXIT]:" << std::endl;
	while (run)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			if (fb.getIndex() < MAX_CONTACTS)
			{
				fb._contact[fb.getIndex()] = fb.addContact();
				fb.increaseIndex();
				fb.setOldIndex();
			}
			else
			{
				fb._contact[fb.getOldIndex()] = fb.addContactFull(fb.getContact(), fb.getOldIndex());
				fb.increaseOldIndex();
			} 
		}
		else if (command == "SEARCH")
		{
			if (fb.getIndex() > 0)
				fb.showPhonebook(fb.getContact(), fb.getIndex());
			else
				std::cout << "Phonebook is empty" << std::endl;
		}
		else if (command == "EXIT")
		{
			std::cout << "# Bye." << std::endl;
			run = false;
		}
	}
	return (0);
}