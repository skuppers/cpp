#include "Human.hpp"
#include <iostream>

void Human::meleeAttack(std::string const & target)
{
    std::cout << "Melee attack to " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "Ranged attack to " << target << std::endl;
}
void Human::intimidatingShout(std::string const & target)
{
    std::cout << "Intimidating " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    std::string actions[3] = {
        "melee", "ranged", "intimidate"
    };

    void (Human::*actionptr[3])(std::string const &) = {
        &Human::meleeAttack, 
        &Human::rangedAttack, 
        &Human::intimidatingShout
    };

    for (size_t i = 0; i < 3; i++)
    {
        if (action_name.compare(actions[i]) == 0) {
            (this->*actionptr[i])(target);
        }
    }
    
}