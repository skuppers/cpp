#ifndef __FIXED__H__
#define __FIXED__H__

#include <iostream>

class Fixed
{
private:
    int _fixedPointValue;
    static const int _bitAmount;
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &newValue);

    Fixed &operator=(const Fixed &rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);

};

#endif  //!__FIXED__H__