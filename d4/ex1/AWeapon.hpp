#ifndef __AWEAPON__H__
#define __AWEAPON__H__

#include <string>
#include <iostream>

class AWeapon
{
    private:
        std::string _name;
        int         _damage;
        int         _apcost;
    public:
        AWeapon(void);
        AWeapon(std::string const &name, int apcost, int damage);
        ~AWeapon(void);

        std::string getName(void) const;
        int getAPCost(void) const;
        int getDamage(void) const;
        virtual void attack(void) const = 0;
};

#endif  //!__AWEAPON__H__