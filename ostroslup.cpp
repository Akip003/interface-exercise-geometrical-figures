#include<iostream>
#include "Header.h"
#include <math.h>
void Ostroslup::get_params()
{
	std::cout << "-----Parametry Ostroslupa-----\n";
	std::cout << "podaj a: ";
	std::cin >> a;
	std::cout << "podaj h: ";
	std::cin >> h;
}

double Ostroslup::krawedz()
{
	double wynik = a * sqrt(2) * 4 + 4 * a;
	return wynik;
}

double Ostroslup::pole()
{
	double wynik = pow(a, 2) + 2 * a * sqrt(pow(a/2,2)+ pow(h, 2));
	return wynik;
}

double Ostroslup::objetosc()
{
	double wynik =  (pow(a, 2) * h)/3;
	return wynik;
}

void Ostroslup::show()
{
	std::cout << "pole ostroslupa: " << pole() << "\nobjetosc ostroslupa: " << objetosc();
}
