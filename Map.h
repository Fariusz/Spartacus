#include "Hex.h"
class Map{
private:
	Map();
	static Map* m_instance;
	Hex** tab = new Hex*[10];
	bool isMoveOutOfBound(int i, int j);	
public:
	static Map* getInstance();
	void printTab();
	bool getMove(int i, int j, bool &NW, bool &W, bool &SW, bool &NE, bool &E. bool &SE);
	~Map();
};

/*
NW 	   	 NE
W	X	 E
SW		 SE
*/
