#ifndef __FRAGTRAP__H__
#define __FRAGTRAP__H__

#include <string>
#include <iostream>

class FragTrap
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
    FragTrap(std::string name);
    ~FragTrap(void);

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    vaulthunter_dot_exe(std::string const & target);
};


#endif  //!__FRAGTRAP__H__