#ifndef __SUPERTRAP__H__
#define __SUPERTRAP__H__

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public:
    SuperTrap(std::string name);
    ~SuperTrap();
};

#endif  //!__SUPERTRAP__H__