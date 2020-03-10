#include <iostream>
#include "Map.h"

Map::Map()
{
	int j = 1, kol = 7;
	for (int i = 0; i < 10; i++)
	{
		if (kol==11)j = -1;
		tab[i] = new Hex[kol];
		tab[i][kol - 1].setMove(false);
		tab[i][kol - 2].setMove(false);
		kol += j;
	}
	for (int i = 0; i < kol; i++)
	{
		tab[9][i].setMove(false);
	}
}

void Map::printTab()
{
	int kol = 7, z = 1;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < kol; j++)
		{
			Hex hex = tab[i][j];
			std::cout << hex.isMoveAllowed() << " ";
		}
		std::cout << std::endl;
		kol += z;
		if (kol == 11)z = -1;
	}
}

bool Map::getMove(int i, int j, bool &NW, bool &W, bool &SW, bool &NE, bool &E, bool &SE)
{
	if (!isMoveOutOfBound(i, j))
	{
		Hex currentHex = tab[i][j];

		NW = !isMoveOutOfBound(i - 1, j - 1);
		W = !isMoveOutOfBound(i, j - 1);
		SW = !isMoveOutOfBound(i + 1, j - 1);
		NE = !isMoveOutOfBound(i - 1, j + 1);
		E = !isMoveOutOfBound(i, j + 1);
		SE = !isMoveOutOfBound(i + 1, j + 1);

		return true;
	}
	else
	{
		NW = false;
		W = false;
		SW = false;
		NE = false;
		E = false;
		SE = false;
	}

	return false;
}

bool Map::isMoveOutOfBound(int i, int j)
{
	if (i < 0 || j < 0 || !tab[i][j].isMoveAllowed())
	{
		return true;
	}

	else return false;
}
