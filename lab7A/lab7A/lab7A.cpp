#include <iostream>

using namespace std;

int a;



int main(void) {
	setlocale(LC_ALL, "rus");
	for (;;) {
		int k = 1;
		int n = 6;
		cout << "Если ответ ДА - введите 1, если НЕТ - 2." << endl;
		for (;;) {

			if (k == 6 && n == 11)
				break;
			cout << "Курите?"<< endl;
		cin >> a;
			if (a == 1)
			{
				if (k > 5)
					cout << "Некурщих мест нет, повторите еще раз" << endl;
				else
				{
					cout << "Ваше место номер - " << k << endl;
					k++;
				}

			}
			else if (a == 2) {
				if (n > 10)
					cout << "Курящих мест нет, повторите еще раз" << endl;
				else {
					cout << "Ваше место номер - " << n << endl;
					n++;
				}
			}
			else
				cout << "Введите правильный ответ" << endl;

		}
		system("pause");
		system("cls");
	}
}