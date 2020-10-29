#include "Fixed.hpp"

const int Fixed::_bitAmount = 8;

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

Fixed::Fixed(const int newValue)
{
    this->_fixedPointValue = newValue << _bitAmount;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float newValue)
{
    this->_fixedPointValue = roundf(newValue * (1 << _bitAmount));
    std::cout << "Float constructor called" << std::endl;
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

float Fixed::toFloat(void) const {
    return ((float)(this->_fixedPointValue) / (1 << _bitAmount));
}

int Fixed::toInt(void) const {
    return ((int)(this->_fixedPointValue >> _bitAmount));
}

std::ostream &operator<<(std::ostream &out, Fixed const &val)
{
    out << val.toFloat();
    return out;
}