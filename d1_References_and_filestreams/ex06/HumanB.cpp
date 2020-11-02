#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string nm) : name(nm)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& wp)
{
    this->weapon = &wp;
}