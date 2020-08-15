#include "main.h"

using namespace std;

void print_OM(int* Ar, int N) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << setw(4) << *(Ar + i * N + j);
		}
		cout << endl;
	}
}

void fill_OM(int* Ar, int N) {
	for (int i = 0; i < N; i++) // Заполнение дм как ом
	{
		for (int j = 0; j < N; j++)
		{
			*(Ar + i * N + j) = rand() % 5;
		}
	}
	print_OM(Ar, N);
}

void solve_OM(int* Ar, int N) {
	for (int t = 1; t <= N / 2; t++)
	{
		int j;
		j = t;
		int sum1 = 0;
		int sum2 = 0;
		for (int i = t - 1; i >= 0; i--)
		{
			j++;
			sum1 = sum1 + *(Ar + i * N + j) + *(Ar + j * N + i);
			sum2 = sum2 + *(Ar + (N - 1 - i) * N + N - 1 - j) + *(Ar + (N - 1 - j) * N + N - 1 - i);
		}
		*(Ar + (t * N) + t) = sum1;
		*(Ar + (N - 1 - t) * N + N - 1 - t) = sum2;

	}
}