#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define N 5

int Ar[N][N];   /* массив, который обрабатывается */
int sum1;
int sum2;



int main(void) {
	setlocale(LC_ALL, "rus");



	//srand(time(NULL));  /* инициализация rand */
	printf("Начальный массив:\n");

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
		{
			Ar[i][j] = rand() % 10; 
			printf("%4d", Ar[i][j]);
			
		}
		putchar('\n');
	}
	printf("Переделанный массив:\n");
	while (k <= 4)
	{
		j = k; sum1 = 0; sum2 = 0;
		for (i = k - 1; i >= 0; i--)
		{
			j++;
			sum1 = sum1 + A[i][j] + A[j][i];
			sum2 = sum2 + A[S - 1 - i][S - 1 - j] + A[S - 1 - j][S - 1 - i];
		}
		A[k][k] = sum1;
		A[S - 1 - k][S - 1 - k] = sum2;
		k++;
	}
		putchar('\n');
	}

