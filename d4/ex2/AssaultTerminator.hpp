#ifndef __ASSAULTTERMINATOR__H__
#define __ASSAULTTERMINATOR__H__

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator(void);
        AssaultTerminator(AssaultTerminator const &src);
    
        ~AssaultTerminator(void);

        AssaultTerminator &operator=(const AssaultTerminator &rhs);

        virtual void          battleCry(void) const;
        virtual void          meleeAttack(void) const;
        virtual void          rangedAttack(void) const;
        virtual ISpaceMarine  *clone(void) const;
};

#endif  //!__ASSAULTTERMINATOR__H__