#include<iostream>
#include "Header.h"
int main()
{
	Bryla *tab[3] = {new Kula, new Ostroslup, new Prostopadloscian};
	for (int i = 0; i < 3; i++)
	{
		tab[i]->get_params();
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << std::endl;
		tab[i]->show();
		std::cout << std::endl;
		
	}
	return 0;
}