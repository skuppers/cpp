#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name)
{
    _maxHitpoints = 100;
    _currenthitpoints = _maxHitpoints;
    _maxEnergy = 50;
    _currentEnergy = _maxEnergy;
    _level = 1;
    _meleeDamage = 20;
    _rangedDamage = 15;
    _armor = 3;
    std::cout << "FR4G-TP " << name << " prêt a défendre la base !" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "FR4G-TP " << this->_name << ": autodestruction initié ! Veuillez reculer !" << std::endl;
}

void    ScavTrap::rangedAttack(std::string const & target) {
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

void    ScavTrap::meleeAttack(std::string const & target) {
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

void    ScavTrap::takeDamage(unsigned int amount) {
    int damage = (amount - this->_armor);
    if (damage < 0)
        damage = 0;
    std::cout << "FR4G-TP " << this->_name  << " se prend " << damage << " points de dégats !"<< std::endl;
    this->_currenthitpoints -= damage;
    if (this->_currenthitpoints < 0)
        this->_currenthitpoints = 0;
}

void    ScavTrap::beRepaired(unsigned int amount) {
    int missing_hp = this->_maxHitpoints - this->_currenthitpoints;
    if (amount > missing_hp)
        amount = missing_hp;
    std::cout << "FR4G-TP " << this->_name  << " se répare de " << amount << " HP !" << std::endl;
    this->_currenthitpoints += amount;
}

void    ScavTrap::challengeNewcomer(std::string const & newcomer)
{
    std::cout << newcomer << " wants to challenge me !" << std::endl;
    return ;
}
