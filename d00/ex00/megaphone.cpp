#include <iostream>
#include <string>
#include <locale>

int     main(int ac, char **av)
{
    (void)av;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {   
        for (size_t i = 1; i < (size_t)ac; i++)
        {
            std::string str(av[i]);
            for (size_t j = 0; j < str.length(); j++)
            {
                std::cout << (char)std::toupper(str[j]); 
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }

    return (0);
}