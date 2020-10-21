#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H
#include <string>

class ZombieEvent {

private:
    std::string _type;

public:
    ZombieEvent(void);
    ~ZombieEvent(void);

    void setZombieType(std::string type);
    Zombie *newZombie(std::string name);
    //Zombie *randomChump(void)
};

#endif