#ifndef __SCAVTRAP__H__
#define __SCAVTRAP__H__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap(std::string name);
    ~ScavTrap(void);

    void    challengeNewcomer(std::string const & newcomer);
};


#endif  //!__SCAVTRAP__H__