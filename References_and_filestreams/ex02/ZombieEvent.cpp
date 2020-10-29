#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(void)  { 
    this->type = "";
}

ZombieEvent::~ZombieEvent(void) { }

void ZombieEvent::setZombieType(std::string type) {
    this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie* zb = new Zombie(name, this->type);
    return zb;
}

Zombie *ZombieEvent::randomChump(void)
{
    int     index;
    int     names_nbr;
    Zombie  *zombie;
    std::string names[] = {"Brulux", "Catfish", "Jean-titouan", "MarseilleBB", "WshAlorsMaRace"};

    if (this->type == "")
        this->setZombieType("ded");
    names_nbr = 5;
    index = rand() % names_nbr;
    zombie = this->newZombie(names[index]);
    return (zombie);
}