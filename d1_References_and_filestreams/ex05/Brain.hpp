#ifndef __BRAIN__H__
#define __BRAIN__H__
#include <string>

class Brain
{
private:
    bool nul;
public:
    Brain(void);
    ~Brain(void);
    std::string identify(void);
};

#endif  //!__BRAIN__H__