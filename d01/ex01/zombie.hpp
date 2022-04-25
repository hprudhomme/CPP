#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <stdio.h>
# include <cstdlib>

class Zombie
{
    public:
        Zombie(void);
        Zombie(std::string);
        ~Zombie();
        void    announce(void);
        bool    setName(std::string);
        std::string     getName(void);

    private:
        std::string name;
};

#endif