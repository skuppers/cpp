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

#endif  //!__POWERFIST__H__