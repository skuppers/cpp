#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name)
{
    _maxHitpoints = 100;
    _currenthitpoints = _maxHitpoints;
    _maxEnergy = 100;
    _currentEnergy = _maxEnergy;
    _level = 1;
    _meleeDamage = 30;
    _rangedDamage = 20;
    _armor = 5;
    std::cout << "FR4G-TP " << name << " prêt et paré pour la bataille !" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP " << this->_name << ": autodestruction initié ! Veuillez reculer !" << std::endl;
}

void    FragTrap::rangedAttack(std::string const & target) {
    if (this->_currentEnergy < 10)
    {
        std::cout << "FR4G-TP " << this->_name  << ": plus assez d'energie pour attaquer! "  << std::endl;
    }
    else
    {
        this->_currentEnergy -= 10;
        std::cout << "FR4G-TP " << this->_name  << " attaque " << target << " a distance, causant " << this->_rangedDamage << " points de dégats !" << std::endl;
    }
}

void    FragTrap::meleeAttack(std::string const & target) {
    if (this->_currentEnergy < 15)
    {
        std::cout << "FR4G-TP " << this->_name  << ": plus assez d'energie pour attaquer! "  << std::endl;
    }
    else
    {
        this->_currentEnergy -= 15;
        std::cout << "FR4G-TP " << this->_name  << " attaque " << target << " au CaC, causant " << this->_meleeDamage << " points de dégats !" << std::endl;
    }
}

void    FragTrap::takeDamage(unsigned int amount) {
    int damage = (amount - this->_armor);
    if (damage < 0)
        damage = 0;
    std::cout << "FR4G-TP " << this->_name  << " se prend " << damage << " points de dégats !"<< std::endl;
    this->_currenthitpoints -= damage;
    if (this->_currenthitpoints < 0)
        this->_currenthitpoints = 0;
}

void    FragTrap::beRepaired(unsigned int amount) {
    int missing_hp = this->_maxHitpoints - this->_currenthitpoints;
    if (amount > missing_hp)
        amount = missing_hp;
    std::cout << "FR4G-TP " << this->_name  << " se répare de " << amount << " HP !" << std::endl;
    this->_currenthitpoints += amount;
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