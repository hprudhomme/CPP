#include "contact.hpp"
#include "phonebook.hpp"

Contact Phonebook::addContact(void)
{
    Contact     new_contact;
    std::string buffer;

    std::cout << "First name : ";
    std::cin >> buffer;
    new_contact.setFirstName(buffer);
    std::cout << "Last name : ";
    std::cin >> buffer;
    new_contact.setLastName(buffer);
    std::cout << "Nick name : ";
    std::cin >> buffer;
    new_contact.setNickname(buffer);
    std::cout << "Login : ";
    std::cin >> buffer;
    new_contact.setLogin(buffer);
    std::cout << "Postal Address : ";
    std::cin >> buffer;
    new_contact.setPostalAddress(buffer);
    std::cout << "Email Address : ";
    std::cin >> buffer;
    new_contact.setEmailAddress(buffer);
    std::cout << "Phone Number : ";
    std::cin >> buffer;
    new_contact.setPhoneNumber(buffer);
    std::cout << "Birthday : ";
    std::cin >> buffer;
    new_contact.setBirthdayDate(buffer);
    std::cout << "Favorite Meal : ";
    std::cin >> buffer;
    new_contact.setFavoriteMeal(buffer);
    std::cout << "Underwear Color : ";
    std::cin >> buffer;
    new_contact.setUnderwearColor(buffer);
    std::cout << "Darkest Secret : ";
    std::cin >> buffer;
    new_contact.setDarkestSecret(buffer);
    std::cout << std::endl << "Everything saved. Cool. :D" << std::endl;
    return (new_contact);
}

Contact Phonebook::addContactFull(Contact phonebook[], int contact_index)
{
    
    std::string buffer;

    std::cout << "First name : ";
    std::cin >> buffer;
    phonebook[contact_index].setFirstName(buffer);
    std::cout << "Last name : ";
    std::cin >> buffer;
    phonebook[contact_index].setLastName(buffer);
    std::cout << "Nick name : ";
    std::cin >> buffer;
    phonebook[contact_index].setNickname(buffer);
    std::cout << "Login : ";
    std::cin >> buffer;
    phonebook[contact_index].setLogin(buffer);
    std::cout << "Postal Address : ";
    std::cin >> buffer;
    phonebook[contact_index].setPostalAddress(buffer);
    std::cout << "Email Address : ";
    std::cin >> buffer;
    phonebook[contact_index].setEmailAddress(buffer);
    std::cout << "Phone Number : ";
    std::cin >> buffer;
    phonebook[contact_index].setPhoneNumber(buffer);
    std::cout << "Birthday : ";
    std::cin >> buffer;
    phonebook[contact_index].setBirthdayDate(buffer);
    std::cout << "Favorite Meal : ";
    std::cin >> buffer;
    phonebook[contact_index].setFavoriteMeal(buffer);
    std::cout << "Underwear Color : ";
    std::cin >> buffer;
    phonebook[contact_index].setUnderwearColor(buffer);
    std::cout << "Darkest Secret : ";
    std::cin >> buffer;
    phonebook[contact_index].setDarkestSecret(buffer);
    std::cout << std::endl << "Everything saved. Cool. :D" << std::endl;
    return (phonebook[contact_index]);
}