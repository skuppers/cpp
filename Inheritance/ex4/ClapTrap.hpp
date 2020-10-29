#ifndef __CLAPTRAP__H__
#define __CLAPTRAP__H__

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    int     _currenthitpoints;
    int     _maxHitpoints;
    int     _currentEnergy;
    int     _maxEnergy;
    int     _level;
    std::string   _name;
    int     _meleeDamage;
    int     _rangedDamage;
    int     _armor;
public:
    ClapTrap(std::string name);
    ~ClapTrap(void);

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    std::string getName(void) const;
};

#endif  //!__CLAPTRAP__H__