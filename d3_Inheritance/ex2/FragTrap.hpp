#ifndef __FRAGTRAP__H__
#define __FRAGTRAP__H__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    
public:
    FragTrap(std::string name);
    ~FragTrap(void);

    void    vaulthunter_dot_exe(std::string const & target);
};


#endif  //!__FRAGTRAP__H__