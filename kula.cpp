#include<iostream>
#include "Header.h"
#include<cmath>

void Kula::get_params()
{
	std::cout << "-----Parametry Kuli-----\n";
	std::cout << "podaj r: \n";
	std::cin >> r;

}
double Kula::krawedz()
{
	std::cout << "kula nie posiada krawedzi";
	return 0;
}
double Kula::pole()
{
	double wynik = 4 * pi * pow(r, 2);
	return wynik;
}
double Kula::objetosc()
{
	double wynik = 4  * pi * pow(r, 3)/3;
	return wynik;
}
void Kula::show()
{
	std::cout << "pole kuli: " << pole() << "\nobjetosc kuli: " << objetosc();
}