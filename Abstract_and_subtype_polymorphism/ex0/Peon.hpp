#ifndef __PEON__H__
#define __PEON__H__

#include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(void);
    Peon(std::string name);
    ~Peon(void);

    void getPolymorphed(void) const;
};

#endif  //!__PEON__H__