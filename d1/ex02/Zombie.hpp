#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <string>

class Zombie {

private:
    std::string name;
    std::string type;

public:
    Zombie(void);
    ~Zombie(void);
    
    std::string getName(void) const;
    std::string  getType(void) const;
    void setName(std::string name);
    void setType(std::string type);
    void advert(void) const;
};

#endif