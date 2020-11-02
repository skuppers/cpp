#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main(void)
{
    Character* me = new Character("IceGamer");

    std::cout << *me;

    AEnemy* scorp = new RadScorpion();

    PlasmaRifle* pr = new PlasmaRifle();
    PowerFist*   pf = new PowerFist();

    me->equip(pr);

    std::cout << *me;

    me->attack(scorp);
    me->attack(scorp);
    me->attack(scorp);
    me->attack(scorp);
    return 0;
}