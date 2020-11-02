#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
    std::cout << "Abstract weapon created!" << std::endl;
    return ;
}

AWeapon::~AWeapon(void)
{
}

std::string AWeapon::getName(void) const {
    return _name;
}

int AWeapon::getAPCost(void) const {
    return _apcost;
}

int AWeapon::getDamage(void) const {
    return _damage;
}