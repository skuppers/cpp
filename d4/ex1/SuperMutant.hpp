#ifndef __SUPERMUTANT__H__
#define __SUPERMUTANT__H__

#include "AEnemy.hpp"

class SuperMutant : public AEnemy
{
private:
    /* data */
public:
    SuperMutant(void);
    ~SuperMutant(void);
    void takeDamage(int);
};

#endif  //!__SUPERMUTANT__H__