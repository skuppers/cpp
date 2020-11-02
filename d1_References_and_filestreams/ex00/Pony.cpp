#include "Pony.hpp"

Pony::Pony(void) {

}

Pony::~Pony(void) {

}

void Pony::setColor(std::string color) {
    this->color = color;
}

std::string Pony::getColor(void) const {
    return this->color;
}