#include "Cube.h"
Cube::Cube(int i_red_cube, int i_black_cube, int i_blue_cube){
    m_black_cube = i_black_cube;
    m_red_cube = i_red_cube;
    m_blue_cube = i_blue_cube;
    m_defense = new int[m_black_cube];
    m_attack = new int[m_red_cube];
}

void Cube::set_black_cube(int y){
    if( y != m_black_cube){
        if(y > 0){
            delete[] m_defense;
            m_defense = new int[y];
            m_black_cube = y;
        }
    }
}

void Cube::set_red_cube(int x){
    if( x != m_red_cube){
        if(x > 0){
            delete[] m_attack;
            m_attack = new int[x];
            m_red_cube = x;
        }
    }
}

void Cube::randomization_cube() {

    if (m_black_cube < m_red_cube) {
        for (int i = 0; i < m_red_cube; i++) {
            if (i < m_black_cube) {
                m_defense[i] = rand() % 6 + 1;
            }
            m_attack[i] = rand() % 6 + 1;
        }
    } else {
        for (int i = 0; i < m_black_cube; i++) {
            if (i < m_red_cube) {
               m_attack[i] = rand() % 6 + 1;
            }
            m_defense[i] = rand() % 6 + 1;
        }
    }

    for (int i = 0; i < m_red_cube - 1; i++) {
        for (int j = i + 1; j < m_red_cube; j++) {
            if (m_attack[i] < m_attack[j]) {
                swap(m_attack[i], m_attack[j]);
            }
        }
    }
    for (int i = 0; i < m_black_cube - 1; i++) {
        for (int j = i + 1; j < m_black_cube; j++) {
            if (m_defense[i] < m_defense[j]) {
                swap(m_defense[i], m_defense[j]);
            }
        }
    }

}

/*
int combat_mode() {

		int i_defense = 0;
		int i_max, i_min;

		if (m_red_cube < m_black_cube) {
			i_max = m_black_cube;
			i_min = m_red_cube;
		}
		else {
			i_max = m_red_cube;
			i_min = m_black_cube;
		}

		for (int i = 0; i < i_max; i++) {
			if (i > i_min) {

			}

			if (0 > defense[i] - attack[i]) {
				i_defense++;
			}
		}

}
 */

int Cube::blue_cube(int cube1, int cube2) {

    int sum1 = 0, sum2 = 0;

    if (cube1 <= cube2) {
        for (int i = 0; i < cube2; i++) {
            if (i < cube1) {
                sum1 += rand() % 6 + 1;
            }
            sum2 += rand() % 6 + 1;
        }
    } else {
        for (int i = 0; i < cube1; i++) {
            if (i < cube2) {
                sum2 += rand() % 6 + 1;
            }
            sum1 += rand() % 6 + 1;
        }
    }

    if (sum1 < sum2) {
        return 2;
    } else if (sum1 > sum2) {
        return 1;
    } else {
        return blue_cube(cube1, cube2);
    }

}
/*
void main() {
    srand(time(0));

    int num_cube_player_1 = 1, num_cube_player_2 = 1;

    cout << blue_cube(num_cube_player_1, num_cube_player_2) << endl;

    Cube player_1;

    player_1.randomization_cube();

    system("pause");
}*/