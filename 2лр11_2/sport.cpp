#include "sport.h"

void sport::set(string n, char c, float m, int p)
{
	name = n;
	cod = c;
	mark = m;
	place = p;
}

void sport::get(string n, char& c, float& m, int& p)
{

	n = name;
	c = cod;
	m = mark;
	p = place;

}

void sport::show(void)
{
	cout << name << "\t";
	cout << cod << "\t";
	cout << mark << "\t";
	cout << place << "\t";
}