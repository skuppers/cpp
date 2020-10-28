#ifndef __ISPACEMARINE__H__
#define __ISPACEMARINE__H__

class ISpaceMarine
{
    public:
        virtual ~ISpaceMarine() {};
        virtual ISpaceMarine* clone() const = 0;
        virtual void battleCry() const = 0;
        virtual void rangedAttack() const = 0;
        virtual void meleeAttack() const = 0;
};

#endif  //!__ISPACEMARINE__H__