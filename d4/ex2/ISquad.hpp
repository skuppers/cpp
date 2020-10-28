#ifndef __ISQUAD__H__
#define __ISQUAD__H__

#include "ISpaceMarine.hpp"

class ISquad
{
    public:
        virtual ~ISquad(void) { return ; };

        virtual int             getCount(void) const = 0;
        virtual ISpaceMarine*   getUnit(int) const = 0;
        virtual int             push(ISpaceMarine*) = 0;
};

#endif  //!__ISQUAD__H__