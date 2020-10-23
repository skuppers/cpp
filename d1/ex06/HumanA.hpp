#ifndef __HUMANA__H__
#define __HUMANA__H__
#include "Weapon.hpp"


class HumanA
{
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA(std::string name, Weapon& wp);
    ~HumanA();
    void    attack(void);
};


#endif  //!__HUMANA__H__