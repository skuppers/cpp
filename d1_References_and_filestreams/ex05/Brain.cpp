#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
}

Brain::~Brain(void)
{
}

std::string Brain::identify(void)
{
    std::stringstream ss;
    ss << (void*)this;
    return ss.str();
}