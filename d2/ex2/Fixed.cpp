#include "Fixed.hpp"

const int Fixed::_bitAmount = 8;

Fixed::Fixed(void)
{
    std::cout << "Fixed constructor called" << std::endl;
    this->_fixedPointValue = 0;
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

Fixed::~Fixed(void) { }


Fixed &Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
    {
        this->_fixedPointValue = rhs.getRawBits();
    }
    return *this;
}

bool Fixed::operator>(const Fixed &rhs) const {
    return (this->_fixedPointValue > rhs._fixedPointValue);
}

bool Fixed::operator<(const Fixed &rhs) const {
    return (this->_fixedPointValue < rhs._fixedPointValue);
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return (this->_fixedPointValue >= rhs._fixedPointValue);
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return (this->_fixedPointValue <= rhs._fixedPointValue);
}

bool Fixed::operator==(const Fixed &rhs) const {
    return (this->_fixedPointValue == rhs._fixedPointValue);
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return (this->_fixedPointValue != rhs._fixedPointValue);
}

Fixed Fixed::operator+(const Fixed &rhs) const {
    return (Fixed(this->toFloat() + rhs.toFloat()));
}
Fixed Fixed::operator-(const Fixed &rhs) const {
    return (Fixed(this->toFloat() - rhs.toFloat()));
}
Fixed Fixed::operator*(const Fixed &rhs) const {
    return (Fixed(this->toFloat() * rhs.toFloat()));
}
Fixed Fixed::operator/(const Fixed &rhs) const {
    return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed &Fixed::operator++(void)
{
    this->_fixedPointValue += 1;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->_fixedPointValue -= 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
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


Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return ((a < b) ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return ((a < b) ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return ((a > b) ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return ((a > b) ? a : b);
}

std::ostream &operator<<(std::ostream &out, Fixed const &val)
{
    out << val.toFloat();
    return out;
}