#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    _maxHitpoints = 100;
    _currenthitpoints = _maxHitpoints;
    _maxEnergy = 100;
    _currentEnergy = _maxEnergy;
    _level = 1;
    _meleeDamage = 10;
    _rangedDamage = 10;
    _armor = 0;
    std::cout << "FR4G-TP " << " ClapTrap " << _name << " a été construit !" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "FR4G-TP " << " ClapTrap " << _name << " a été détruit !" << std::endl;
}

void    ClapTrap::rangedAttack(std::string const & target) {
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

void    ClapTrap::meleeAttack(std::string const & target) {
    this->_currentEnergy += 15;
    std::cout << "FR4G-TP " << this->_name  << " attaque " << target << " au CaC, causant " << this->_meleeDamage << " points de dégats !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    int damage = (amount - this->_armor);
    if (damage < 0)
        damage = 0;
    std::cout << "FR4G-TP " << this->_name  << " se prend " << damage << " points de dégats !"<< std::endl;
    this->_currenthitpoints -= damage;
    if (this->_currenthitpoints < 0)
        this->_currenthitpoints = 0;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    int missing_hp = this->_maxHitpoints - this->_currenthitpoints;
    if (amount > missing_hp)
        amount = missing_hp;
    std::cout << "FR4G-TP " << this->_name  << " se répare de " << amount << " HP !" << std::endl;
    this->_currenthitpoints += amount;
}