#ifndef __SCAVTRAP__H__
#define __SCAVTRAP__H__

#include <iostream>
#include <string>

class ScavTrap
{
private:
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
    ScavTrap(std::string name);
    ~ScavTrap();

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    challengeNewcomer(std::string const & newcomer);
};


#endif  //!__SCAVTRAP__H__