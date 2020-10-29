#ifndef PONY_H
# define PONY_H
#include <string>

class Pony {
private:
    std::string color;
    std::string height;
    int speed;

public:
    Pony(void);
    ~Pony(void);

    void setColor(std::string color);
    std::string getColor(void) const;
};

#endif