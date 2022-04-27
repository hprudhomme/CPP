#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <stdio.h>

class Zombie
{
    public:
        Zombie(std::string);
        ~Zombie();
        void    announce(void);
        std::string     getName(void);

    private:
        std::string name;
};

Zombie* newZombie( std::string name );
void    randomChump(std::string name);

#endif
