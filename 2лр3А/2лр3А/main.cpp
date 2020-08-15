#include "main.h"


int main()
{
	setlocale(LC_ALL, "Rus");
	while (true)
	{
		srand(time(NULL));

		int A[N];

		for (int i = 0; i < N; i++)
		{
			A[i] = rand() % 20 - 10;
		}

		absol(A);

		otnos(A);

		bez(A);

		masukaz(A);

		ukazukaz(A);

		system("pause");
		system("cls");
	}
}

