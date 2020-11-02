#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _meleeDamage = 30;
    _rangedDamage = 20;
    _armor = 5;
    std::cout << "FR4G-TP " << _name << " prêt et paré pour la bataille !" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP " << this->_name << ": autodestruction initié ! Veuillez reculer !" << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target) {
     if (this->_currentEnergy < 25)
    {
        std::cout << "FR4G-TP " << this->_name  << ": plus assez d'energie pour attaquer! "  << std::endl;
    }
    else
    {
        this->_currentEnergy -= 25;
        std::cout << "FR4G-TP " << this->_name  << " attaque " << target << " avec ses pieds, causant " << this->_meleeDamage << " points de dégats !" << std::endl;
    }
}