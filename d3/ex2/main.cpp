#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap claptrap("Clemsah");

    claptrap.rangedAttack("Denis le boss");
    claptrap.meleeAttack("La Zone");
    claptrap.takeDamage(15);
    claptrap.vaulthunter_dot_exe("Jerem");
    claptrap.beRepaired(100);

    ScavTrap scavtrap("Xeyor");
    scavtrap.challengeNewcomer("IceG4M3R");

    return 0;
}