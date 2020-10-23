#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string tp) : type(tp)
{
}

Weapon::~Weapon()
{
}

std::string const & Weapon::getType(void)
{
    return this->type;
}

void    Weapon::setType(std::string t)
{
    this->type = t;
}