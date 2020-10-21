#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(void)  { }

ZombieEvent::~ZombieEvent(void) { }

void ZombieEvent::setZombieType(std::string type) {
    this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie* zb = new Zombie(name, this->_type);
    return zb;
}