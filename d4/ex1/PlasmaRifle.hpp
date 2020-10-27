#ifndef __PLASMARIFLE__H__
#define __PLASMARIFLE__H__

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle(void);
        ~PlasmaRifle(void);
        void attack(void) const;
};

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
}


#endif  //!__PLASMARIFLE__H__