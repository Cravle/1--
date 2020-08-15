#include "main.h"

using namespace std;



int main()
{
	setlocale(LC_ALL, "rus");
	while (true) {
		
		int a;
		int b;
		Figure square;
		char menu;

		cout << "1 - Площадь квадрата. 2 - Площадь прямоугольника 0 - Закрыть программу" << endl;
		cin >> menu;
		switch (menu)
		{
		case '1':
			cout << "Введите одно  число > ";
			cin >> a;
			
			square.Result(a);

			
			break;
		case '2':
			cout << "Введите два числа >";
			cin >> a;
			cin >> b;
			
			square.Result(a,b);

			break;
		case '0':
			break;
		default:
			cout << "error" << endl;
			break;
		}
		if (menu == '0') 
		{
			break;
		}

		system("pause");
		system("cls");



	}
}
