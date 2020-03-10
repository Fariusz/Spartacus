#pragma once
#include<string>
class Object {                         
private:
        short m_value;
        std::string m_name;
        short m_attack;
        short m_defense;
        short m_speed;
protected:
        Object(const std::string &i_name, short i_value, short i_attack, short i_defense, short i_speed){
                setValue(i_value);
                setName(i_name);
                setAttack(i_attack);
                setDefense(i_defense);
                setSpeed(i_speed);
        }
public:
        void setValue(short i_value);
        short getValue();
        const std::string setName(const std::string &i_name);
        const std::string &getName();
        void setAttack(short i_damage);
        void setDefense(short i_defense);
        void setSpeed(short i_speed);
        short getAttack();
        short getDefense();
        short getSpeed();
        virtual ~Object();
};

