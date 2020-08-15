#include "main.h"

using namespace std;



void main()
{
	setlocale(LC_ALL, "rus");
	system("chcp 1251");


	
	int* t;
	int a = 0;
	t = &a;

	for (;;) {
		char* S1 = new char[80];
		char* S2 = new char[80];

		int* t;
		int a = 0;
		t = &a;
		printf("Введите строку >");
		/* ввод строки-источника */
		if (!strcmp(gets_s(S1,80), "***")) break;
		/* ввод остальных параметров */
		printf("Введите подстроку >");
		gets_s(S2, 80);



		printf("\nReturn = %d\n", index(S1, S2, t));

		if (*t == 0)
			cout << "Неверная длина" << endl;
		else if (*t == -1)
			cout << "Подстрока не совподает" << endl;
		else
			cout << "Нормальное выполнение. Последнее вхождение подстроки в строку под индексом:" << *t << endl << endl;

		delete[] S1;
		delete[] S2;

		system("pause");
		system("cls");

	}
}