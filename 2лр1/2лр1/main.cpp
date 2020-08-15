#pragma once
#include <stdio.h>
#include <locale.h>
#include <string>
#include <ctime>
#include <Windows.h>
#include <iostream>

using namespace std;


struct sport {
	string name; /* название */
	char cod;
	float mark;
	int place;
};





void write(sport mm[], int* n);
void random(sport mm[], int* n);
void sort(sport mm[], int* n);
void print(sport mm[], int* n);

void write(sport mm[], int* n) {
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ". Введите: фамилию участника, код команды, количестов, место в итоге >";
		cin >> mm[i].name;
		if (!strcmp(mm[i].name.c_str(), "***")) {
			*n = i;
			break;
		}
		cin >> mm[i].cod;
		cin >> mm[i].mark;
		cin >> mm[i].place;

	}

}

void random(sport mm[], int* n) {
	srand(time(NULL));
	int r; // количество строк
	int codx;// Рабочая переменная
	r = rand() % 9 + 1;
	*n = r;
	for (int i = 0; i < r; i++)
	{
		// Создание уникльного имени
		bool no_unique = true;
		do {
			mm[i].name = "StName" + to_string(rand() % 10 + 1);
			for (int j = 0; j < r; j++)
			{
				if (i != j && mm[i].name == mm[j].name)
				{
					no_unique = true;
					break;
				}
				else no_unique = false;
			}
		} while (no_unique);

		// Создание оценок и среднего балла
		mm[i].cod = char(rand() % 26 + 0x61);
		mm[i].mark = (rand() % 6666 + 50) / 10.0;// создания оценки

		bool no_unique2 = true;
		do {
			mm[i].place = char(rand() % r + 1);
			for (int j = 0; j < r; j++)
			{
				if (i != j && mm[i].place == mm[j].place)
				{
					no_unique2 = true;
					break;
				}
				else no_unique2 = false;
			}
		} while (no_unique2);
	}
}

void sort(sport mm[], int* n)
{
	sport t;
	for (int i = 0; i < *n; i++) {
		for (int j = 0; j < *n; j++) {
			if (mm[i].mark > mm[j].mark) {
				t = mm[i];
				mm[i] = mm[j];
				mm[j] = t;
			}
		}
	}

	for (int i = 0; i < *n; i++)
	{
		mm[i].place = i + 1;
	}

}

void print(sport mm[], int* n) {
	printf("|-----------------------------------------------------------|\n");
	printf("|               Ведомость спортивных сотязаний              |\n");
	printf("|-----------------------------------------------------------|\n");
	printf("| Фамилия участника | Код команды | Количество|Места в итоге|\n");
	printf("|                   |             |    баллов |             |\n");
	printf("|-------------------|-------------|-----------|-------------|\n");
	for (int i = 0; i < *n; i++)
		printf("|%-9s          |%-c            |%-11.1f|%-13d|\n", mm[i].name.c_str(), mm[i].cod, mm[i].mark, mm[i].place);
	printf("---------------------------------------------\n");

}


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
		printf("1 – ввод с экрана, 2 – случайным образом, 0 - закрыть программу\n");
		cin >> menu;
		if (menu == '1')  //Ввод с экрана
		{
			write(mm, &n);
		}

		else if (menu == '2') {
			random(mm, &n);
			cout << "Сгенерировалось " << n << " строк" << endl;
		}
		else if (menu == '0')break;
		else cout << "error" << endl;

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

			else if (menu == '0')break;
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