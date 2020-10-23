#include "ZombieEvent.hpp"

int main(void) {

    ZombieEvent ze;
    Zombie *zptr;
    Zombie *kendal;

    zptr = ze.newZombie("Kendal Jenner");
    zptr->advert();
    kendal = zptr;
    
    for (size_t i = 0; i < 3; i++)
    {
        ze.setZombieType("Undead Nightmare");
        zptr = ze.randomChump();
        zptr->advert();
        delete zptr;
    }
    kendal->advert();
    delete kendal;
    return 0;
}