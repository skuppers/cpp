#ifndef __SQUAD__H__
#define __SQUAD__H__

#include "ISquad.hpp"

class Squad : public ISquad
{
    private:
        typedef struct          s_container
        {
            ISpaceMarine        *unit;
            struct s_container  *next;
        }                       t_container;

        int                     _unitCount;
        t_container*            _squad;

        void                    _copyUnits(const Squad &src);
        void                    _destroyUnits(void);
        bool                    _isUnitAssigned(ISpaceMarine *marine,
                                                t_container *squad);
    public:
        Squad(void);
        Squad(const Squad &src);
        ~Squad(void);

        Squad &operator=(const Squad &rhs);

        virtual int             getCount(void) const;
        virtual ISpaceMarine*   getUnit(int n) const;
        virtual int             push(ISpaceMarine* spacemarine);
};

#endif  //!__SQUAD__H__