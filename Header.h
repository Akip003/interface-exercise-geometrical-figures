#pragma once

class Bryla
{
public:
	virtual void get_params()=0;
	virtual double krawedz()=0;
	virtual double pole() = 0;
	virtual double objetosc() = 0;
	virtual void show() = 0;

private:



};
class Kula : virtual public Bryla
{
private:
	double r;
	double pi = 3.14;
public:
	void get_params();
	double krawedz();
	double pole();
	double objetosc();
	void show();
};
class Prostopadloscian : public Bryla
{
private:
	double a;
	double b;
	double c;
public:
	void get_params();
	double krawedz();
	double pole();
	double objetosc();
	void show();
};
class Ostroslup : public Bryla
	//ostros³up prawid³owy czworok¹tny
{
private:
	double a;
	double h;
public:
	void get_params();
	double krawedz();
	double pole();
	double objetosc();
	void show();
};