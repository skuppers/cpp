#ifndef __VICTIM__H__
#define __VICTIM__H__

#include <string>
#include <iostream>

class Victim
{
private:
    std::string _name;
public:
    Victim(void);
    Victim(const Victim&);
    Victim(std::string name);
    ~Victim(void);
    Victim &operator=(const Victim&);
    
    void getPolymorphed(void) const;

    void introduce(void) const;
    std::string getName(void) const;
};

std::ostream &operator<<(std::ostream &out, Victim const &victm);

#endif  //!__VICTIM__H__