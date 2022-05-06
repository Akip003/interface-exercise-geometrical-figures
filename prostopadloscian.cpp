#include<iostream>
#include "Header.h"
#include<cmath>

void Prostopadloscian::get_params()
{
	std::cout << "-----Parametry Prostopadloscianu-----\n";
	std::cout << "podaj a: ";
	std::cin >> a;
	std::cout << "podaj b: ";
	std::cin >> b;
	std::cout << "podaj c: ";
	std::cin >> c;
}

double Prostopadloscian::krawedz()
{
	double wynik = 4*(a + b + c);
	return wynik;
}

double Prostopadloscian::pole()
{
	double wynik = 2 * (a * b + a * c + b * c);
	return wynik;
}

double Prostopadloscian::objetosc()
{
	double wynik = a * b * c;
	return wynik;
}
void Prostopadloscian::show()
{
	std::cout << "pole prostopadloscianu: " << pole() << "\nobjetosc prostopadloscianu: " << objetosc();
}