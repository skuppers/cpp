#include "Fixed.hpp"

const int _bitAmount = 8;

Fixed::Fixed(void)
{
    std::cout << "Fixed constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::~Fixed(void)
{
    std::cout << "Fixed destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &value)
{
    std::cout << "Fixed overloaded constructor called" << std::endl;
    this->_fixedPointValue = value.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
    {
        this->_fixedPointValue = rhs.getRawBits();
    }
    return *this;
    std::cout << "Assignment operator called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits function called" << std::endl;
    return _fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits function called" << std::endl;
    this->_fixedPointValue = raw;
}