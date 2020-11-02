#ifndef __SORCERER__H__
#define __SORCERER__H__

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    std::string _name;
    std::string _title;
public:
    Sorcerer(void);
    Sorcerer(const Sorcerer&);
    Sorcerer(std::string name, std::string title);
    ~Sorcerer(void);
    //Sorcerer &operator=(const Sorcerer&);

    void polymorph(Victim const &) const;

    void    introduce(void) const;
    std::string getName(void) const;
    std::string getTitle(void) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &wizard);

#endif  //!__SORCERER__H__