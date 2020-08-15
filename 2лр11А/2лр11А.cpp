#include "Point.h"

int main() {
	setlocale(LC_ALL, "Rus");
	int sum;
	int proizv;

	cout << "Конструктор по умолчанию" << endl;
	Point a;
	a.find(sum, proizv);
	cout << "Sum= " << sum << endl;
	cout << "Proizv= " << proizv << endl;
	a.print();
	cout << endl;

	cout << "Конструктор с параметром" << endl;
	Point b(10, 2);
	b.find(sum, proizv);
	cout << "Sum= " << sum << endl;
	cout << "Proizv= " << proizv << endl;
	b.print();
	cout << endl;

	cout << "Конструктор копирования" << endl;
	Point c(a);
	c.find(sum, proizv);
	cout << "Sum= " << sum << endl;
	cout << "Proizv= " << proizv << endl;
	c.print();
	cout << endl;

	cout << "Функция Set" << endl;
	Point d;
	d.SetXY(7, 7);
	d.find(sum, proizv);
	cout << "Sum= " << sum << endl;
	cout << "Proizv= " << proizv << endl;
	d.print();
	cout << endl;
}