#include "main.h"

using namespace std;

void print_DM(int** Ar, int N) {
	for (int i = 0; i < N; i++) {					//заполнение дм

		for (int j = 0; j < N; j++)
		{


			cout << setw(4) << *(*(Ar + i) + j);

		}
		putchar('\n');
	}
}

void fill_DM(int** Ar, int N) {
	for (int i = 0; i < N; i++) {					//заполнение дм как дм

		for (int j = 0; j < N; j++)
		{

			*(*(Ar + i) + j) = rand() % 5;
		}
	}
	printf("Начальный массив:\n");

	print_DM(Ar, N);
}

void solve_DM(int** Ar, int N) {
	for (int t = 1; t <= N / 2; t++)
	{
		int j;
		j = t;
		int sum1 = 0;
		int sum2 = 0;
		for (int i = t - 1; i >= 0; i--)
		{
			j++;
			sum1 = sum1 + *(*(Ar + i) + j) + *(*(Ar + j) + i);
			sum2 = sum2 + *(*(Ar + N - 1 - i) + N - 1 - j) + *(*(Ar + N - 1 - j) + N - 1 - i);
		}
		*(*(Ar + t) + t) = sum1;
		*(*(Ar + N - 1 - t) + N - 1 - t) = sum2;


	}
}