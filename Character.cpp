#include "Character.h"

void Character::setPosition(short x, short y)
{
	m_position.x = x;
	m_position.y = y;
}


Type Character::getType()
{
        return m_type;
}

Position Character::getPosition()
{
        return m_position;
}

