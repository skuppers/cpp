#ifndef __AENEMY__H__
#define __AENEMY__H__

#include <string>
#include <iostream>

class AEnemy
{
    protected:
        int         _hp;
        std::string _type;
    public:
        AEnemy(void);
        AEnemy(int hp, std::string const & type);
        virtual ~AEnemy(void);

        std::string getType() const;
        int         getHP() const;

        virtual void takeDamage(int);
};

#endif  //!__AENEMY__H__