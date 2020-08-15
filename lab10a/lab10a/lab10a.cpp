#include <iostream>
#include <iomanip>


using namespace std;




char fun(int a, int b) {
	if (a < b)
		return '<';
	else if (b < a)
		return '>';
	else
		return '=';
}


int main()
{
	while (true) {
		setlocale(LC_ALL, "rus");
		int a;
		int b;
		cout << "Введите первое число: ";
		cin >> a;

		cout << "Введите второе число: ";
		cin >> b;
		cout << a << " " << fun(a, b) << " " << b << endl;
		system("pause");
		system("cls");
	}
}
