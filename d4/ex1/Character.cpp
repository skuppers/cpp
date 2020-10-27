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

void Character::equip(AWeapon *awp) {
    this->_currentWeapon = awp;
}

void Character::attack(AEnemy *enm) {
    if (this->_currentWeapon == nullptr)
    {
        std::cout << "No weapon equipped !" << std::endl;
        return ;
    }
    if (this->_ap < this->_currentWeapon->getAPCost())
    {
        std::cout << "Can not attack enemy: not enough AP's !" << std::endl;
        return ;
    }
    this->_ap -= this->_currentWeapon->getAPCost();
    std::cout << _name << " attacks " << enm->getType() << " with a " << this->_currentWeapon->getName() << std::endl;
    this->_currentWeapon->attack();
    enm->takeDamage(this->_currentWeapon->getDamage());
    if (enm->getHP() < 0)
        enm->~AEnemy();
}

std::string Character::getName(void) const {
    return _name;
}

int Character::getAP(void) const {
    return _ap;
}

std::string Character::getWeaponName(void) const {
    if (this->_currentWeapon == nullptr)
        return "nullptr";
    return (this->_currentWeapon->getName());
}

std::ostream &operator<<(std::ostream &out, Character const &ch) {
    if (ch.getWeaponName().compare("nullptr") == 0)
        out << ch.getName() << " has " << ch.getAP() << " AP but is unarmed!" << std::endl;
    else
        out << ch.getName() << " has " << ch.getAP() << " AP and carries a " << ch.getWeaponName() << std::endl;
    return out;
}
