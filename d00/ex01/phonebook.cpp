#include "contact.hpp"
#include "phonebook.hpp"

Phonebook::Phonebook(void) { return ; }
Phonebook::~Phonebook(void) { return ; }

int Phonebook::getIndex(void)
{
    return (this->index);
}

int Phonebook::getOldIndex(void)
{
    return (this->oldIndex);
}

Contact *Phonebook::getContact(void)
{
    return (this->_contact);
}

void Phonebook::increaseIndex(void)
{
    this->index += 1;
    return ;
}

void Phonebook::increaseOldIndex(void)
{
    this->oldIndex += 1;
    if (this->oldIndex == 8)
        this->oldIndex = 0;
    return ;
}


void Phonebook::setIndex(void)
{
    this->index = 0;
    return ;
}

void Phonebook::setOldIndex(void)
{
    this->oldIndex = 0;
    return ;
}

Contact Phonebook::getContactIndex(int index)
{
    return (this->_contact[index]);
}