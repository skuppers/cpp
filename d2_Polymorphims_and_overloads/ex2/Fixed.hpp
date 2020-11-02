#ifndef __FIXED__H__
#define __FIXED__H__

#include <cmath>
#include <iostream>

class Fixed
{
private:
    int                 _fixedPointValue;
    static const int    _bitAmount;
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &newValue);
    Fixed(const int newValue);
    Fixed(const float newValue);

    Fixed   &operator=(const Fixed &rhs);
    Fixed   &operator++(void);
    Fixed   &operator--(void);
    Fixed   operator++(int);
    Fixed   operator--(int);
    
    bool    operator>(const Fixed &rhs) const;
    bool    operator<(const Fixed &rhs) const;
    bool    operator>=(const Fixed &rhs) const;
    bool    operator<=(const Fixed &rhs) const;
    bool    operator==(const Fixed &rhs) const;
    bool    operator!=(const Fixed &rhs) const;
    Fixed    operator+(const Fixed &rhs) const;
    Fixed    operator-(const Fixed &rhs) const;
    Fixed    operator*(const Fixed &rhs) const;
    Fixed    operator/(const Fixed &rhs) const;

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    static Fixed    &min(Fixed &a, Fixed &b);
    const static Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed    &max(Fixed &a, Fixed &b);
    const static Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &in);

#endif  //!__FIXED__H__