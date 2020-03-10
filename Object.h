#pragma
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
                set_value(i_value);
                set_name(i_name);
                set_attack(i_attack);
                set_defense(i_defense);
                set_speed(i_speed);
        }
public:
        void set_value(short value);
        short get_value();
        void std::string set_name(const &name);
        const std::string &get_name();
        void set_attack(short damage);
        void set_defense(short defense);
        void set_speed(short speed);
        short get_attack();
        short get_defense();
        short get_speed();
        virtual ~Object();
};

