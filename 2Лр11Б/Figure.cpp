#include "Figure.h"

Figure::Figure(int valueX) {
	x = valueX;
	
};

Figure::Figure(int valueX, int valueY)
{
	x = valueX;
	h = valueY;
};

void Figure::print1()
{
	float st;
	st = (h * x) / 2;
	cout << "S треугольника: " << st << endl;
	
}

void Figure::print2()
{
	float sk;
	sk = x * x * pi;
	cout << "S круга: " << sk << endl;
}