#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string nm, Weapon& wp) : name(nm), weapon(wp)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}