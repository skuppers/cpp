#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    _maxHitpoints = 60;
    _currenthitpoints = _maxHitpoints;
    _maxEnergy = 120;
    _currentEnergy = _maxEnergy;
    _meleeDamage = 60;
    _rangedDamage = 5;
    std::cout << "N1NJ-TP NinjaTrap " << name << " ohmai wah sasuke nani san" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "N1NJ-TP NinjaTrap " << _name << " harakiri" << std::endl;
}

void NinjaTrap::ninjaShoeBox(NinjaTrap &target) {
    std::cout << "N1NJ-TP NinjaTrap " << _name << " slaps the shit ouf of " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoeBox(ScavTrap &target) {
    std::cout << "N1NJ-TP NinjaTrap " << _name << " slaps the shit ouf of " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoeBox(FragTrap &target) {
    std::cout << "N1NJ-TP NinjaTrap " << _name << " slaps the shit ouf of " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoeBox(ClapTrap &target) {
    std::cout << "N1NJ-TP NinjaTrap " << _name << " slaps the shit ouf of " << target.getName() << std::endl;
}