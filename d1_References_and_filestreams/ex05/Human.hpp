#ifndef __HUMAN__H__
#define __HUMAN__H__

#include "Brain.hpp"

class Human
{
private:
    Brain br;
public:
    Human(void);
    ~Human(void);
    Brain getBrain(void);
    std::string identify(void);
};

#endif  //!__HUMAN__H__