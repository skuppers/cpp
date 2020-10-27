#ifndef __POWERFIST__H__
#define __POWERFIST__H__

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist(void);
        ~PowerFist(void);
        void attack(void) const;
};

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
    std::cout << "PowerFist constructor called!" << std::endl;
    return ;
}

PowerFist::~PowerFist(void)
{
    std::cout << "PowerFist destructor called!" << std::endl;
}

void PowerFist::attack(void) const {
    std::cout << "* pschh... SBAM! *" << std::endl;
}

#endif  //!__POWERFIST__H__