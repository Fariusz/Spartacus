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

struct Position {
	int x;
	int y;
};

class Character : Object {
private:
	Type m_type;
	Position m_position;
	
public:
	Character(const std::string i_name, Type i_type, short i_attack = 1, short i_defense = 1, short i_speed = 1, short i_value = 1) : Object(i_name, i_value, i_attack, i_defense, i_speed) {

		m_type = i_type;
	}
	void setPosition(short x, short y);
	Position getPosition();
	Type getType();
	void getDamage(short i_damage, CubeColor i_color); 
	void move();
	void dealDamage();
	
};

