#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : amount(n)
{
    this->zombs = new Zombie[n];
    return ;
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->zombs ;
}

void ZombieHorde::setZombieType(std::string type)
{
    this->type = type;
}

void ZombieHorde::announce(void)
{
    for (size_t i = 0; i < amount; i++)
        this->zombs[i].advert();
}
