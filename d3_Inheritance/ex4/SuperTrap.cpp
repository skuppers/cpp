#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name), ClapTrap(name)
{
    _maxHitpoints = 100;
    _currenthitpoints = _maxHitpoints;
    _maxEnergy = 120;
    _currentEnergy = _maxEnergy;
    _level = 1;
    _meleeDamage = 60;
    _rangedDamage = 20;
    _armor = 5;
    _name = name;
    std::cout << "SuperTrap invoked !" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SuperTrap disapeared in the shadows of the night..." << std::endl;
}