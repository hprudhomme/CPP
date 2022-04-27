#include "contact.hpp"
#include "phonebook.hpp"

static void
searchContact(Contact phonebook[], int nbr_contacts)
{
	std::string c;

    std::cout << "Enter the index of a contact: ";
	std::getline(std::cin, c);
    std::cout << std::endl;
    if ((c[0] >= '0' && c[0] < nbr_contacts + '0'))
    {
        std::cout << phonebook[c[0] - '0'].getFirstName() << std::endl;
        std::cout << phonebook[c[0] - '0'].getLastName() << std::endl;
        std::cout << phonebook[c[0] - '0'].getNickname() << std::endl;
        std::cout << phonebook[c[0] - '0'].getLogin() << std::endl;
        std::cout << phonebook[c[0] - '0'].getPostalAddress() << std::endl;
        std::cout << phonebook[c[0] - '0'].getEmailAddress() << std::endl;
        std::cout << phonebook[c[0] - '0'].getPhoneNumber() << std::endl;
        std::cout << phonebook[c[0] - '0'].getBirthdayDate() << std::endl;
        std::cout << phonebook[c[0] - '0'].getFavoriteMeal() << std::endl;
        std::cout << phonebook[c[0] - '0'].getUnderWearColor() << std::endl;
        std::cout << phonebook[c[0] - '0'].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cin.clear();
        std::cout << "Sorry, that index cannot be found. :(" << std::endl;
    }
}

/*
** Truncate a contact field if the length is larger than FIELD_WITDTH.
** The last displayable character is replaced by a dot ('.').
*/

static std::string
truncateContact(std::string field)
{
    field = field.erase((FIELD_WITDTH - 1), \
    field.length() - (FIELD_WITDTH - 1));
    field.append(".");
    return (field);
}

/*
** Shows the contacts of the phonebook.
** If one of the fields is larger than the maximum width, it'll be truncated.
*/

void    Phonebook::showPhonebook(Contact phonebook[], int nbr_contacts)
{
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;

    std::cout << std::setw(FIELD_WITDTH);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < nbr_contacts; i += 1)
    {
        first_name = phonebook[i].getFirstName();
        last_name = phonebook[i].getLastName();
        nickname = phonebook[i].getNickname();

        std::cout << "|" << std::setw(FIELD_WITDTH) << i;
        first_name = (first_name.length() > FIELD_WITDTH) ? \
            truncateContact(first_name) : first_name;
        std::cout << "|" << std::setw(FIELD_WITDTH) << first_name;

        last_name = (last_name.length() > FIELD_WITDTH) ? \
            truncateContact(last_name) : last_name;
        std::cout << "|" << std::setw(FIELD_WITDTH) << last_name;

        nickname = (nickname.length() > FIELD_WITDTH) ? \
            truncateContact(nickname) : nickname;
        std::cout << "|" << std::setw(FIELD_WITDTH) << nickname;
        std::cout << "|" << std::endl;
    }
    searchContact(phonebook, nbr_contacts);
}
