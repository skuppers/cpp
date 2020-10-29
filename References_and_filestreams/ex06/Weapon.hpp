#ifndef __WEAPON__H__
#define __WEAPON__H__
#include <string>

class Weapon
{
private:
    std::string type;
public:
    Weapon(void);
    Weapon(std::string tp);
    ~Weapon();
    std::string const & getType(void);
    void setType(std::string t);
};

#endif  //!__WEAPON__H__