#pragma once
//
// Created by jacekb on 3/11/20.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Cube {
private:
    int m_red_cube = 5;
    int m_black_cube = 4;
    int m_blue_cube = 2;
    int *m_attack;
    int *m_defense;
public:
    Cube(int i_red_cube, int i_black_cube, int i_blue_cube);
    void set_red_cube(int x);
    void set_black_cube(int y);
    void set_blue_cube(int z){ m_blue_cube = z;}
    void randomization_cube();
    int combat_mode();
    int blue_cube(int i_id_p1, int i_id_p2);
    int test_cube(int a, int b, double c);

};