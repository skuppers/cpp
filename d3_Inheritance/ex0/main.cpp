#include "FragTrap.hpp"

int main(void)
{
    FragTrap claptrap("ClapTrap");

    claptrap.rangedAttack("Denis le boss");
    claptrap.meleeAttack("La Zone");
    claptrap.takeDamage(15);
    claptrap.vaulthunter_dot_exe("Jerem");
    claptrap.beRepaired(100);
    return 0;
}