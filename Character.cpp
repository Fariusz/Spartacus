#include "Character.h"

void object::set_value(short i_value)
{
	m_value = (i_value > 0) ? i_value : 0;
}

short object::get_value()
{
	return m_value;
}

std::string object::get_name()
{
	return m_name;
}

void Character::set_atack(short value)
{
	m_atack = (value > 0) ? value : 1;
}

void Character::set_defense(short value)
{
	m_defense = (value > 0) ? value : 1;
}

void Character::set_speed(short value)
{
	m_speed = (value > 0) ? value : 1;
}

void Character::set_position(short x, short y)
{

}

short Character::get_atack()
{
	return m_atack;
}

short Character::get_defense()
{
	return m_defense;
}

short Character::get_speed()
{
	return m_speed;
}

Type Character::get_type()
{
	return m_type;
}

Position Character::get_position()
{
	return m_position;
}

void Character::get_damage()
{
}

void Character::get_damage(short i_damage, CubeColor i_color)
{

}

