#include "Point.h"

Point::Point() {
	x = 5;
	y = 7;
}

Point::Point(int a, int b) {
	x = a;
	y = b;
}

Point::Point(Point& other) {
	this->x = other.x;
	this->y = other.y;
}

void Point::SetXY(int a, int b) {
	x = a;
	y = b;
}

void Point::find(int& sum, int& proizv) {
	sum = x + y;
	proizv = x * y;
}

void Point::print() {
	cout << "x= " << x << endl;
	cout << "y= " << y << endl;
	cout << "Сумма равно =" << x + y << endl;
	cout << "Произведение равно =" << x * y << endl;
}