#include <iostream>
#include "Plansza.h"
#include "Hex.h"

using namespace std;

Plansza::Plansza()
{
	Hex**tab = new Hex*[10];
	int j = 1, kol = 6;

	for (int i = 0; i<10; i++)
	{
		if (kol == 10) j = -1;
		tab[i] = new Hex[kol];
		kol += j;
	}

}
//nowa funkcja wysy³a do Plansza.h ok, 


Plansza::~Plansza()
{
}
