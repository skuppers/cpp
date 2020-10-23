#ifndef __HUMANB__H__
#define __HUMANB__H__
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon* weapon;
public:
    HumanB(std::string nm);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon& wp);
};


#endif  //!__HUMANB__H__