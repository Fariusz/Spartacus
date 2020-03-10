#pragma
#include <string>
#include "Object.h"


enum Type{ 
	gladiator, 
	slave 
};
enum CubeColor{
	red, 
	black, 
	blue
};


class Character : Object {
private:
	Type m_type;
	Position m_position;
	
public:
	Character (const std::string i_name, Type i_type, short i_atack = 1, short i_defense = 1, short i_speed = 1, short i_value = 1) : Object(i_value, i_name, i_attack, i_defense, i_speed) {

		m_type = i_type;
	}
	Type get_type();
	void get_damage(short i_damage, CubeColor i_color); 
	void move();
	void deal_damage();
	
};

