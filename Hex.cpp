#include "Hex.h"

bool Hex::isMoveAllowed()
{
	return moveAllowed;
}

void Hex::setMove(bool moveAllowed)
{
	this->moveAllowed = moveAllowed;
}

bool Hex::isOccupiedByPlayer()
{
	return occupiedByPlayer;
}

void Hex::setOccupation(bool occupiedByPlayer)
{
	this->occupiedByPlayer = occupiedByPlayer;
}

Hex::Hex()
{
	this->moveAllowed = true;
	this->occupiedByPlayer = false;
}

