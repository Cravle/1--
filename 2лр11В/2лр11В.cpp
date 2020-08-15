#include "Complex.h"


int main() {
	setlocale(LC_ALL, "Rus");
	int r;
	int m;
	int vib;
	Complex lab;
	cout << "Введите числа r-вещественная часть, m-мнимая часть " << endl;
	cout << "r=";
	cin >> r;
	cout << "m=";
	cin >> m;
	lab.setRM(r, m);
	cout << "Ваше комплексное число > ";
	lab.print();
	cout << endl;
	cout << "Хотите добавить к r и m целые числа ? 1-Да, 0-Нет" << endl;
	cout << ">";
	cin >> vib;
	if (vib == 1) {
		cout << "Введите числа которые хотите добавить к:" << endl;
		cout << "r >";
		cin >> r;
		cout << "m >";
		cin >> m;
		lab.add(r, m);
		cout << "Ваше комплексное число > ";
		lab.print();
		cout << endl;
	}
	cout << "Введите r и m для второго комплекного числа" << endl;
	cout << "r=";
	cin >> r;
	cout << "m=";
	cin >> m;
	Complex a;
	a.setRM(r, m);
	cout << "Ваше второе комплексное число > ";
	a.print();
	lab.sum(r, m);
	cout << endl << "Результат сложения двух комплексных чисел > ";
	lab.print();
}