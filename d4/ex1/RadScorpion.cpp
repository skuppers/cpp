#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : AEnemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}