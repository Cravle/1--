#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define N 100

int Ar[N];   /* массив, который обрабатывается */
int K; // счетчик

int main(void) {
	setlocale(LC_ALL, "rus");



	srand(time(NULL));  /* инициализация rand */

	for (;;) {
		printf("Начальный массив:\n");
		K = 0;
		for (int i = 0; i < N; i++)
		{
			Ar[i] = rand() % 101 - 50; //заполнение от -50 до 50
			printf("%4d", Ar[i]);
		}
		putchar('\n'); //отступ
		putchar('\n');

		for (int i = 0; i < N; i++)
		{
			if (abs(Ar[i]) == abs(Ar[i + 1]) && Ar[i] != Ar[i + 1]) { //проверяем и выводим пары
				K++;
				printf("%4d ", Ar[i]);
				printf("%4d \n\n", Ar[i + 1]);
			}
		}
		printf("Количество пар: %d\n\n", K);
		system("pause");
		system("cls");
		
	}
	

}