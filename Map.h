#pragma once
#include "Hex.h"

class Map
{
	private:
		Hex** tab = new Hex *[10];
		bool isMoveOutOfBound(int i, int j);

	public:
		Map();
		void printTab();
		bool getMove(int i, int j, bool &NW, bool &W, bool &SW, bool &NE, bool &E, bool &SE);
};
/*
NW      NE
W	X	E
SW	    SE
*/
