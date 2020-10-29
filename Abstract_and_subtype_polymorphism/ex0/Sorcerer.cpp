#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
    std::cout << "You should not call this function !!" << std::endl;
    return ;
}

Sorcerer::Sorcerer(const Sorcerer& copy)
{
    std::cout << "Sorcerer copy constructor called!" << std::endl;
    *this = copy;
    return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
    return ;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
    return ;
}

void Sorcerer::polymorph(Victim const &ref) const {
    ref.getPolymorphed();
    return ;
}

void    Sorcerer::introduce(void) const {
    std::cout << "I am " << _name << ", " << _title << ", and i love magic the gathering!" << std::endl;
    return ;
}

std::string Sorcerer::getName(void) const {
    return _name;
}

std::string Sorcerer::getTitle(void) const {
    return _title;
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &wizard) {
    out << "I am " << wizard.getName() << ", " << wizard.getTitle() << ", and i love magic the gathering!" << std::endl;
    return out;
}