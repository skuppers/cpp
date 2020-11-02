#ifndef __ZOMBIEHORDE__H__
#define __ZOMBIEHORDE__H__
#include "Zombie.hpp"

class ZombieHorde
{
private:
    std::string type;
    int     amount;
    Zombie  *zombs;
public:
    ZombieHorde(int n);
    ~ZombieHorde();
    void announce(void);
    void setZombieType(std::string type);
};

#endif  //!__ZOMBIEHORDE__H__