#include "Human.hpp"

int main(void)
{
    std::string const & name = "Handofblood";

    Human h;
    h.action("melee", name);
    h.action("ranged", name);
    h.action("intimidate", name);

    return 0;
}