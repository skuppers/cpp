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
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

};

std::ostream &operator<<(std::ostream &out, Fixed const &in);

#endif  //!__FIXED__H__