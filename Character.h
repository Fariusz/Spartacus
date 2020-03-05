#pragma once
#include <string>

enum Type { gladiator, slave };
struct Position { short x; short y; };
enum CubeColor {red, black, blue};

class object
{
private:
		short m_value;
		std::string m_name;
public:
	object(short i_value, std::string i_name)
	{
		set_value(i_value);
		m_name = i_name;
	}

	void set_value(short value);
	
	short get_value();
	std::string get_name();
};

class Character 
	:private object
{
private:
	short m_atack{ 1 };
	short m_defense{ 1 };
	short m_speed{ 1 };
	Type m_type{ Type::slave };
	Position m_position;

	
public:
	Character( short i_atack, short i_defense, short i_speed, short i_value, std::string i_name, Type i_type, Position i_position)
		: object(i_value, i_name)
	{
		set_atack(i_atack);
		set_defense(i_defense);
		set_speed(i_speed);
		m_type = i_type;
		set_position(i_position.x, i_position.y);
	}

	void set_atack(short value);
	void set_defense(short value);
	void set_speed(short value);
	void set_position(short x, short y);

	short get_atack();
	short get_defense();
	short get_speed();
	Type get_type();
	Position get_position();

	/*AKCJE*/
	void get_damage(short i_damage, CubeColor i_color); 
	void move();
	void deal_damage();

};