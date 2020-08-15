#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int index(char* ST1, char* ST2, int *t)
{
	int i, k = 0;  
	int m1, m2;
	m1 = strlen(ST1);
	m2 = strlen(ST2);
	if (m2 > m1 || m1 == 0 || m2 == 0)
		return 1; // не правильно заданы строки
	i = m1 - m2;
	
	for (int j  = 0; j < m1; j++)
	{
		if (ST1[j] == ST2[0])
			break;
		k++;
	}

	for (int j = 0; j < m2; j++)
	{
		if (ST1[k + j] != ST2[j])
		{
			*t = -1;
			return -1; // не совпадение подстроки
		}
	}

	*t = (k + m2 - 1);
	

	return 0;

	
	
}

void main()
{
	setlocale(LC_ALL, "rus");
	system("chcp 1251");


	char S1[80];
	char S2[80];

	int* t;
	int a = 0;
	t = &a;
	
	for (;;) {
		int* t;
		int a = 0;
		t = &a;
		printf("Введите строку >");
		/* ввод строки-источника */
		if (!strcmp(gets_s(S1), "***")) break;
		/* ввод остальных параметров */
		printf("Введите подстроку >");  
		gets_s(S2);
		


		printf("\nReturn = %d\n", index(S1, S2,t));

		if (*t == 0)
			cout << "Неверная длина" << endl;
		else if (*t == -1)
			cout << "Подстрока не совподает" << endl;
		else
			cout << "Нормальное віполнение. Последнее вхождение подстроки в строку под индексом:" << *t << endl << endl;
		
		system("pause");
		system("cls");

	}
}