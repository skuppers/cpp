#include "Squad.hpp"

Squad::Squad(void)
{
    this->_unitCount = 0;
    this->_squad = nullptr;
    return ;
}

Squad::Squad(const Squad &src)
{
    this->_copyUnits(src);
    this->_unitCount = src._unitCount;
    return ;
}

Squad::~Squad(void)
{
    this->_destroyUnits();
    return ;
}

Squad &Squad::operator=(const Squad &rhs)
{
    if (this != &rhs)
    {
        this->_destroyUnits();
        this->_copyUnits(rhs);
        this->_unitCount = rhs._unitCount;
    }
    return *this;
}

int Squad::push(ISpaceMarine *marine)
{
    t_container  *tmp;

    tmp = this->_squad;
    if (marine != nullptr && this->_isUnitAssigned(marine, tmp) == false)
    {
        tmp = this->_squad;
        if (this->_squad != nullptr)
        {
            while (tmp->next)
            {
                tmp = tmp->next;
            }
            tmp->next = new t_container;
            tmp->next->unit = marine;
            tmp->next->next = nullptr;
        }
        else
        {
            this->_squad = new t_container;
            this->_squad->unit = marine;
            this->_squad->next = nullptr;
        }
        this->_unitCount += 1;
    }
    return this->_unitCount;
}


int Squad::getCount(void) const
{
    return this->_unitCount;
}

ISpaceMarine *Squad::getUnit(int n) const
{
    t_container  *tmp;

    tmp = this->_squad;
    if (n < 0 || n >= this->_unitCount)
        return (nullptr);
    while (n--)
        tmp = tmp->next;
    return (tmp->unit);
}

void Squad::_copyUnits(const Squad &src)
{
    for (int i = 0; i < src.getCount(); i += 1)
        push(src.getUnit(i));
    return ;
}

void Squad::_destroyUnits(void)
{
    t_container  *tmp;

    if (this->_squad != nullptr)
    {
        delete this->_squad->unit;
        tmp = this->_squad;
        this->_squad = this->_squad->next;
        delete tmp;
        return (this->_destroyUnits());
    }
    return ;
}

bool Squad::_isUnitAssigned(ISpaceMarine *marine, t_container *squad)
{
    if (squad == nullptr)
        return (false);
    else if (marine == squad->unit)
        return (true);
    else
        return (this->_isUnitAssigned(marine, squad->next));
}