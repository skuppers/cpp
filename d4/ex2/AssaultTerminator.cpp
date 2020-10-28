#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    std::cout << "* Teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
    *this = src;
    std::cout << "* Teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout << "I'll be back..." << std::endl;
    return ;
}

AssaultTerminator &AssaultTerminator::operator= (const AssaultTerminator &rhs)
{
	(void)rhs;
	return (*this);
}

void AssaultTerminator::battleCry(void) const
{
    std::cout << "This code is unclean. Purify it!" << std::endl;
    return ;
}

void AssaultTerminator::meleeAttack(void) const
{
    std::cout << "* attacks with chaifists*" << std::endl;
    return ;
}

void AssaultTerminator::rangedAttack(void) const
{
    std::cout << "* does nothing *" << std::endl;
    return ;
}

ISpaceMarine *AssaultTerminator::clone(void) const
{
    return (new AssaultTerminator);
}