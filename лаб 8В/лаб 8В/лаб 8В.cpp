#include <iostream>

using namespace std;

int a;
int k;
int sum;

int i = 0;



int main()
{
	setlocale(LC_ALL, "rus");

	while (true) {
		int a;
		int k = 0;
		int sum = 0;

		int i = 0;
		cout << "Введите число ";
		cin >> a;
		

		cout << "Новое число:  ";
		
		
		while (a)
		{
			k = k * 10 + a % 10;
			sum += a - (a/10)*10;
			a /= 10;
			i++;
			/*cout << k;*/
		
		}
		cout << k;
		putchar('\n');

		cout << "Сумма цифр: " << sum << endl;
	
		system("pause");
		system("cls");
	}
}


