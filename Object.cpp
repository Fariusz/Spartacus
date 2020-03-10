#include "Object.h"
void Object::setValue(short i_value)
{
        m_value = (i_value > 0) ? i_value : 0;
}

short Object::getValue()
{
        return m_value;
}

const std::string &Object::getName()
{
        return m_name;
}

void Object::setAttack(short i_value)
{
        m_attack = (i_value > 0) ? i_value : 1;
}

void Object::setDefense(short i_value)
{
        m_defense = (i_value > 0) ? i_value : 1;
}

void Object::setSpeed(short i_value)
{
        m_speed = (i_value > 0) ? i_value : 1;
}

short Object::getAttack()
{
        return m_attack;
}

short Object::getDefense()
{
        return m_defense;
}

short Object::getSpeed()
{
        return m_speed;
}

