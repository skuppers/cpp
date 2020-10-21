#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string na, std::string ty) : name(na), type(ty)  { }

Zombie::~Zombie() { }

std::string Zombie::getName(void) const {
    return this->name;
}

std::string Zombie::getType(void) const {
    return this->type;
}

void Zombie::setName(std::string n) {
    this->name = n;
}

void Zombie::setType(std::string t) {
    this->type = t;
}

void Zombie::advert(void) const {
    std::cout << "<" << name << " (" << type << ")> Braiiiiiinnnssss" << std::endl;
}