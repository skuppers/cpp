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

#endif  //!__PLASMARIFLE__H__