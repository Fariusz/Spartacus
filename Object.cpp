#include "Object.h"
void Object::set_value(short i_value)
{
        m_value = (i_value > 0) ? i_value : 0;
}

short Object::get_value()
{
        return m_value;
}

std::string Object::get_name()
{
        return m_name;
}

void Object::set_atack(short value)
{
        m_atack = (value > 0) ? value : 1;
}

void Object::set_defense(short value)
{
        m_defense = (value > 0) ? value : 1;
}

void Object::set_speed(short value)
{
        m_speed = (value > 0) ? value : 1;
}


short Object::get_atack()
{
        return m_atack;
}

short Object::get_defense()
{
        return m_defense;
}

short Object::get_speed()
{
        return m_speed;
}

