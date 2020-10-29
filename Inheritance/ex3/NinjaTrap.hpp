#ifndef __NINJATRAP__H__
#define __NINJATRAP__H__

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
    /* data */
public:
    NinjaTrap(std::string name);
    ~NinjaTrap();
    
    void ninjaShoeBox(NinjaTrap &target);
    void ninjaShoeBox(ScavTrap &target);
    void ninjaShoeBox(FragTrap &target);
    void ninjaShoeBox(ClapTrap &target);
};


#endif  //!__NINJATRAP__H__