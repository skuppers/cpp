#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
    std::cout << "PowerFist constructor called!" << std::endl;
    return ;
}

PowerFist::~PowerFist(void)
{
    std::cout << "PowerFist destructor called!" << std::endl;
    return ;
}

void PowerFist::attack(void) const {
    std::cout << "* pschh... SBAM! *" << std::endl;
    return ;
}