#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
    std::cout << "PlasmaRifle constructor called!" << std::endl;
    return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
    std::cout << "PlasmaRifle destructor called!" << std::endl;
    return ;
}

void PlasmaRifle::attack(void) const {
    std::cout << "* Pew pew pew... *" << std::endl;
    return ;
}