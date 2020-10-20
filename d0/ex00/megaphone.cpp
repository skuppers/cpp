#include <iostream>
#include <string.h>
#include <cctype>

int main(int ac, char **av){

    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return -1;
    }
    
    for (size_t i = 1; i < ac; i++)
        for (size_t j = 0; j < strlen(av[i]); j++)
           std::cout << (char)toupper(av[i][j]);
           
    std::cout << std::endl;
}