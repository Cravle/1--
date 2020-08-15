#include <iostream>
#include <math.h>
using namespace std;

 int main(){
	 setlocale(LC_ALL, "Russian");
	double a, b, c, x1, x2;
	double d;
	for (;;) {
		int ch;
		cout << "Нажмите '1'- чтобы решить уравнение. Нажмите '2'- выйти из программы. "  << endl;
		cout << "Желаете решить уравнение?" << endl;
		cin >> ch;
		if (ch == 1)
		{
			cout << "Введите значение a>";
			cin >> a;
			cout << "Введите значение b>";
			cin >> b;
			cout << "Введите значение c>";
			cin >> c;

			d = b * b - 4 * a * c;

			if (d < 0)
			{
				cout << "Уравнение не имеет корней, введите другие значения" << endl;

			}
			else if (d == 0)
			{
				if (b > 0) {
					cout << "Уравнение имеет 1 корень." << endl; \
						x1 = (-b + sqrt(d)) / (2 * a);
					cout << "Корень уравнения =" << x1 << endl;

				}
			}
			else if (d > 0)
			{
				cout << "Уравнение имеет 2 корня." << endl;
				x1 = (-b + sqrt(d)) / (2 * a);
				x2 = (-b - sqrt(d)) / (2 * a);
				cout << "Первый корень =" << x1 << endl;
				cout << "Второй корень =" << x2 << endl;

			}
		}

		else if (ch == 2) {
			break;
		}
		else if (ch !=1 && ch !=2) {
			cout << "Unkown command" << "\n";
			
		}

	}
}