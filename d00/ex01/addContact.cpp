#include "contact.hpp"
#include "phonebook.hpp"

Contact Phonebook::addContact(void)
{
    Contact     new_contact;
	std::string command;

    std::cout << "First name : ";
    std::getline(std::cin, command);
    new_contact.setFirstName(command);
    std::cout << "Last name : ";
    std::getline(std::cin, command);
    new_contact.setLastName(command);
    std::cout << "Nick name : ";
    std::getline(std::cin, command);
    new_contact.setNickname(command);
    std::cout << "Login : ";
    std::getline(std::cin, command);
    new_contact.setLogin(command);
    std::cout << "Postal Address : ";
    std::getline(std::cin, command);
    new_contact.setPostalAddress(command);
    std::cout << "Email Address : ";
    std::getline(std::cin, command);
    new_contact.setEmailAddress(command);
    std::cout << "Phone Number : ";
    std::getline(std::cin, command);
    new_contact.setPhoneNumber(command);
    std::cout << "Birthday : ";
    std::getline(std::cin, command);
    new_contact.setBirthdayDate(command);
    std::cout << "Favorite Meal : ";
    std::getline(std::cin, command);
    new_contact.setFavoriteMeal(command);
    std::cout << "Underwear Color : ";
    std::getline(std::cin, command);
    new_contact.setUnderwearColor(command);
    std::cout << "Darkest Secret : ";
    std::getline(std::cin, command);
    new_contact.setDarkestSecret(command);
    std::cout << std::endl << "Everything saved. Cool. :D" << std::endl;
    return (new_contact);
}

Contact Phonebook::addContactFull(Contact phonebook[], int contact_index)
{

    std::string command;

    std::cout << "First name : ";
    std::getline(std::cin, command);
    phonebook[contact_index].setFirstName(command);
    std::cout << "Last name : ";
    std::getline(std::cin, command);
    phonebook[contact_index].setLastName(command);
    std::cout << "Nick name : ";
    std::getline(std::cin, command);
    phonebook[contact_index].setNickname(command);
    std::cout << "Login : ";
    std::getline(std::cin, command);
    phonebook[contact_index].setLogin(command);
    std::cout << "Postal Address : ";
    std::getline(std::cin, command);
    phonebook[contact_index].setPostalAddress(command);
    std::cout << "Email Address : ";
    std::getline(std::cin, command);
    phonebook[contact_index].setEmailAddress(command);
    std::cout << "Phone Number : ";
    std::getline(std::cin, command);
    phonebook[contact_index].setPhoneNumber(command);
    std::cout << "Birthday : ";
    std::getline(std::cin, command);
    phonebook[contact_index].setBirthdayDate(command);
    std::cout << "Favorite Meal : ";
    std::getline(std::cin, command);
    phonebook[contact_index].setFavoriteMeal(command);
    std::cout << "Underwear Color : ";
    std::getline(std::cin, command);
    phonebook[contact_index].setUnderwearColor(command);
    std::cout << "Darkest Secret : ";
    std::getline(std::cin, command);
    phonebook[contact_index].setDarkestSecret(command);
    std::cout << std::endl << "Everything saved. Cool. :D" << std::endl;
    return (phonebook[contact_index]);
}
