#include "Victim.hpp"

Victim::Victim(void)
{
    std::cout << "Default constructor for Victim!" << std::endl;
    return ;
}

Victim::Victim(const Victim& copy)
{
    std::cout << "Victim copy constructor called!" << std::endl;
    *this = copy;
    return ;
}

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
    return ;
}

Victim::~Victim(void)
{
    std::cout << "The victim " << _name << " died for no apparent reasons!" << std::endl;
}

void Victim::getPolymorphed(void) const {
    std::cout << _name << " was just polymorphed in a cute little sheep!" << std::endl;
    return ;
}

void Victim::introduce(void) const {
    std::cout << "I'm " << _name << " and I like otters!"<< std::endl;
    return ;
}

std::string Victim::getName(void) const {
    return _name;
}

std::ostream &operator<<(std::ostream &out, Victim const &wtm) {
    out << "I'm " << wtm.getName() <<  ", and I like otters!" << std::endl;
    return out;
}