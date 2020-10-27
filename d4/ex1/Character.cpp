#include "Character.hpp"

Character::Character(void)
{
}

Character::Character(std::string const &name) : _name(name)
{
    _ap = 40;
    _currentWeapon = nullptr;
    return ;
}

Character::~Character(void)
{
}

void Character::recoverAP(void) {
    std::cout << _name << " recovered action points!" << std::endl;
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
    return ;
}