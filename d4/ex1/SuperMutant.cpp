#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : AEnemy(170, "Super Mutant")
{
    std::cout << "Gaaaah. Break everything!" << std::endl;
    return ;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
    return ;
}

void SuperMutant::takeDamage(int dmg) {
    dmg -= 3;
    if (dmg < 0)
        return ;
    std::cout << "SuperMutant takes " << dmg << " damage!" << std::endl;
    _hp -= dmg;
}