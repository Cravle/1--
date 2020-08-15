#include <iostream>
#include <math.h>

using namespace std;

int a, b, c;
double D;

int main() {
	setlocale(LC_ALL, "rus");

	for (;;) {

		cout << "Введите первое число:";
		cin >> a;
		cout << "Введите второе число:";
		cin >> b;
		cout << "Введите третье число:";
		cin >> c;

		D = b * b - 4 * a * c;

		if (D > 0)
			cout << "Корни уровнения:" << endl << "x1=" << (-b + sqrt(D)) / 2 / a << endl << "x2=" << (-b - sqrt(D)) / 2 / a << endl;
		else if (D == 0)
			cout << "x=" << (-b + sqrt(D)) / 2 / a << endl;
		else
			cout << "Нет действительных корней, введите другие значения" << endl;
		system("pause");
		system("cls");
	}

}