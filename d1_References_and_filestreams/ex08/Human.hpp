#ifndef __HUMAN__H__
#define __HUMAN__H__

#include <string>

class Human
{
private:
    void meleeAttack(std::string const & target);
    void rangedAttack(std::string const & target);
    void intimidatingShout(std::string const & target);
public:
   void action(std::string const & action_name, std::string const & target);
};


#endif  //!__HUMAN__H__