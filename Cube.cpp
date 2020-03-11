#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Cube {
private:
	int m_red_cube = 5;
	int m_black_cube = 4;
	int *attack = new int[m_red_cube];
	int *defense = new int[m_black_cube];
public:
	void set_red_cube(int x) {
		m_red_cube = x;
	}
	void set_balck_cube(int y) {
		m_black_cube = y;
	}
	void randomization_cube() {

		if (m_black_cube < m_red_cube) {
			for (int i = 0; i < m_red_cube; i++) {
				if (i < m_black_cube) {
					defense[i] = rand() % 6 + 1;
				}
				attack[i] = rand() % 6 + 1;
			}
		}
		else {
			for (int i = 0; i < m_black_cube; i++) {
				if (i < m_red_cube) {
					attack[i] = rand() % 6 + 1;
				}
				defense[i] = rand() % 6 + 1;
			}
		}

		for (int i = 0; i < m_red_cube - 1; i++) {
			for (int j = i + 1; j < m_red_cube; j++) {
				if (attack[i] < attack[j]) {
					swap(attack[i], attack[j]);
				}
			}
		}
		for (int i = 0; i < m_black_cube - 1; i++) {
			for (int j = i + 1; j < m_black_cube; j++) {
				if (defense[i] < defense[j]) {
					swap(defense[i], defense[j]);
				}
			}
		}

	}

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
};

int blue_cube(int cube1, int cube2) {

	int sum1 = 0, sum2 = 0;

	if (cube1 <= cube2) {
		for (int i = 0; i < cube2; i++) {
			if (i < cube1) {
				sum1 += rand() % 6 + 1;
			}
			sum2 += rand() % 6 + 1;
		}
	}
	else {
		for (int i = 0; i < cube1; i++) {
			if (i < cube2) {
				sum2 += rand() % 6 + 1;
			}
			sum1 += rand() % 6 + 1;
		}
	}

	if (sum1 < sum2) {
		return 2;
	}
	else if (sum1 > sum2) {
		return 1;
	}
	else {
		return blue_cube(cube1, cube2);
	}

}

void main() {
	srand(time(0));

	int num_cube_player_1 = 1, num_cube_player_2 = 1;

	cout << blue_cube(num_cube_player_1, num_cube_player_2) << endl;

	Cube player_1;

	player_1.randomization_cube();

	system("pause");
}