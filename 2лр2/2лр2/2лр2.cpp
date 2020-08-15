#include "Header.h"
#include "struct.h"

int main(void) {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//struct sport x; /* рабочая переменная */

	while (true) {
		sport mm[10];
		int i, j; /* текущие индексы в массиве */
		int m;    /* индекс минимального элемента */
		char menu;
		char menu2;
		char menu3;
		int n;

#ifdef PRINT_TYPE
		 //Ввод с экрана
			write(mm, &n);
		
#endif

#ifndef PRINT_TYPE
			//рандом генерация
			random(mm, &n);
			

#endif


		printf("3 – Сортировка, 4 – Вывод таблицы\n");
		cin >> menu2;
		if (menu2 == '3')  //Ввод с экрана
		{
			sort(mm, &n);
			printf("1 – Вывести таблицу, 0 - закрыть программу\n");
			cin >> menu3;
			if (menu3 == '1')  //Ввод с экрана
			{
				print(mm, &n);
			}

			else if (menu3 == '0')break;
			else cout << "error" << endl;

		}

		else if (menu2 == '4') {
			print(mm, &n);
		}
		else cout << "error" << endl;



		system("pause");
		system("cls");

	}
}