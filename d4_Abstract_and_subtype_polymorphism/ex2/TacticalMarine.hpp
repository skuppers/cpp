#ifndef __TACTICALMARINE__H__
#define __TACTICALMARINE__H__

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine(void);
        TacticalMarine(const TacticalMarine &src);

        ~TacticalMarine(void);

        TacticalMarine    &operator=(const TacticalMarine &rhs);

        virtual void          battleCry(void) const;
        virtual void          meleeAttack(void) const;
        virtual void          rangedAttack(void) const;
        virtual ISpaceMarine  *clone(void) const;
};

#endif  //!__TACTICALMARINE__H__