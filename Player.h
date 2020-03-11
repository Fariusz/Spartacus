//
// Created by Radosław Loth on 11/03/2020.
//
#include "Character.h"
#include <vector>

class Player
{
private:
    unsigned int m_id;
    std::vector < Character > m_tabChar;

public:
    Position move(int howManyDies, std::vector <Position> where);
};

