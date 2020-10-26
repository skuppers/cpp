#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _meleeDamage = 20;
    _rangedDamage = 15;
    _armor = 3;
    std::cout << "FR4G-TP " << name << " prêt a défendre la base !" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "FR4G-TP " << this->_name << ": autodestruction initié ! Veuillez reculer !" << std::endl;
}

void    ScavTrap::challengeNewcomer(std::string const & newcomer)
{
    std::cout << "FR4G-TP " << _name << ": The newcomer " << newcomer << " wants to challenge me !" << std::endl;
    return ;
}
