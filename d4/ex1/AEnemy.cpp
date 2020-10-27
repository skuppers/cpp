#include "AEnemy.hpp"

AEnemy::AEnemy(void)
{
}

AEnemy::AEnemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
    //std::cout << "AEnemy constructor called!" << std::endl;
    return ;
}

AEnemy::~AEnemy(void)
{
    //std::cout << "AEnemy destructor called!" << std::endl;
    return ;
}

std::string AEnemy::getType(void) const {
    return _type;
}

int AEnemy::getHP(void) const {
    return _hp;
}

void AEnemy::takeDamage(int dmg) {
    if (dmg < 0)
        return ;
    std::cout << "AEnemy " << _type << " takes " << dmg << " damage!" << std::endl;
    _hp -= dmg;
}