#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class Phonebook
{
    public:
        Phonebook(void);
        ~Phonebook(void);
        void                setIndex(void);
        void                setOldIndex(void);
        int                 getIndex(void);
        int                 getOldIndex(void);
        void                increaseIndex(void);
        void                increaseOldIndex(void);
        Contact             *getContact(void);
        Contact             getContactIndex(int index);
        Contact             addContact(void);
        Contact             addContactFull(Contact phonebook[], int contact_index);
        void                showPhonebook(Contact phonebook[], int contact_index);
        Contact _contact[8];
        
    private:
        int     index;
        int     oldIndex;
};

#endif