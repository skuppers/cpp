#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
    int     index;
    int     names_nbr;
    Zombie  *zombie;
    std::string names[] = {"Brulux", "Catfish", "Jean-titouan", "MarseilleBB", "WshAlorsMaRace"};

    if (this->type == "")
        this->type = "ded";
    names_nbr = 5;
    index = rand() % names_nbr;
    this->name = names[index];
}

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