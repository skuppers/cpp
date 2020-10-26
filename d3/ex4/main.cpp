#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
    NinjaTrap ninja("Assasin scred");

    std::cout << "]---------------[" << std::endl;

    SuperTrap supeeer("Vicky");
    supeeer.meleeAttack("Ta mere");
    supeeer.vaulthunter_dot_exe("Alors");
    supeeer.ninjaShoeBox(ninja);

    return 0;
}