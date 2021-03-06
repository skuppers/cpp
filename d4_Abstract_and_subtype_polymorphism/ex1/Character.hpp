#ifndef __CHARACTER__H__
#define __CHARACTER__H__

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character
{
    private:
        std::string _name;
        int         _ap;
        AWeapon     *_currentWeapon;
public:
    Character(void);
    Character(std::string const &name);
    ~Character();

    void recoverAP(void);
    void equip(AWeapon*);
    void attack(AEnemy*);

    std::string getName(void) const;
    int         getAP(void) const;
    std::string getWeaponName(void) const;
};

std::ostream &operator<<(std::ostream &out, Character const &character);

#endif  //!__CHARACTER__H__