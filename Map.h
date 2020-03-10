#include "Hex.h"
class Map{
private:
	Map();
	static Map* m_instance;
	
public:
	static Map* get_instance();
	~Map();
};
