#include "minmax.h"

int main() {
	setlocale(LC_ALL, "Ru");
	int a;
	int b;
	int c;
	int vib;
	minmax lab;
	cout << "Введите 3 числа" << endl;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;

	cout << endl << "1. Через указатели" << endl;
	cout << "2. Через ссылки" << endl;
	cout << ">";
	cin >> vib;
	if (vib == 1) {
		cout << "числа до" << endl;
		cout << a << "  " << b << "  " << c << endl;
		lab.SetYk(&a, &b, &c);
		cout << "числа после" << endl;
		cout << a << "  " << b << "  " << c << endl;
	}
	else if (vib == 2) {
		cout << "числа до" << endl;
		cout << a << "  " << b << "  " << c << endl;
		lab.SetSilk(a, b, c);
		cout << "числа после" << endl;
		cout << a << "  " << b << "  " << c << endl;
	}
	else {
		cout << "Введен неправильный номер" << endl;
		return 0;
	}


}