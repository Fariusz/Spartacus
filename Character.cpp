#include "Character.h"

void Character::setPosition(short x, short y)
{
	m_position.x = x;
	m_position.y = y;
	int chuj = 5;
}

Type Character::getType()
{
        return m_type;
}

Position Character::getPosition()
{
        return m_position;
}

