#include "Pony.hpp"
#include <iostream>

void ponyOnTheStack(void) {
    Pony poney;

    poney.setColor("Blue");
    std::cout << "Poney color: " << poney.getColor() << std::endl;
}

void PonyOnTheHeap(void) {
    Pony* poney = new Pony();
    poney->setColor("White");
    std::cout << "Poney color: " << poney->getColor() << std::endl;
}

int main(void) {
    ponyOnTheStack();
    PonyOnTheHeap();
}