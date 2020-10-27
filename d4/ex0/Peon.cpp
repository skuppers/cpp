#include "Peon.hpp"

Peon::Peon(void)
{
    std::cout << "Peon default constructor called!" << std::endl;
    return ;
}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog Zog." << std::endl;
    return ;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
    return ;
}

void Peon::getPolymorphed(void) const {
    std::cout << getName() << " has been turned into a pink pony!" << std::endl;
    return ;
}