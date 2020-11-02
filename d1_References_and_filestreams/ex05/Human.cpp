#include "Human.hpp"

Human::Human(void)
{
}

Human::~Human()
{
}

Brain Human::getBrain(void)
{
    return this->br;
}

std::string Human::identify(void)
{
    return (this->br.identify());
}