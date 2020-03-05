#pragma once
class Hex
{
private:
	int i, j;
	Hex *NE, *E, *SE, *SW, *W, *NW;
	
public:

	Hex();
	~Hex();
};

