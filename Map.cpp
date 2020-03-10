#include "Map.h"

Map *Map::m_instance = nullptr;

Map::Map() {
	 Hex**tab = new Hex*[10];
        int j = 1, kol = 6;
	for (int i = 0; i<10; i++)
        {
                if (kol == 10) j = -1;
                tab[i] = new Hex[kol];
                kol += j;
        }


}

Map::~Map() {
	// usunac pointery
}

Map* Map::get_instance(){
	if(m_instance == nullptr){
		m_instance = new Map;
	}
	return m_instance;
}
