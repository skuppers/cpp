#ifndef __ISPACEMARINE__H__
#define __ISPACEMARINE__H__

class ISpaceMarine
{
    public:
        virtual ~ISpaceMarine(void) { return ; };

        virtual ISpaceMarine*   clone(void) const = 0;
        virtual void            battleCry(void) const = 0;
        virtual void            rangedAttack(void) const = 0;
        virtual void            meleeAttack(void) const = 0;
};

#endif  //!__ISPACEMARINE__H__