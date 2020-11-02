#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{
    {
        Weapon club = Weapon("Spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("Rubber club");
        bob.attack();
    }
    {
        Weapon club = Weapon("Crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Big Bad Club");
        jim.attack();
    }
}

