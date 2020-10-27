#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main(void)
{
    PlasmaRifle* pr = new PlasmaRifle();
    PowerFist*   pf = new PowerFist();

    pr->attack();
    pf->attack();

    return 0;
}