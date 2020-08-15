#include<iomanip>
#include <iostream>
#include <math.h>
#include <ctime>

#define N 40

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int N1, M1, N2, M2;
	int i, j;

	while (true) {

		cout << "Введите количество строк в первом массиве: ";
		cin >> N1;
		cout << "Введите количество столбцов в первом массиве ";
		cin >> M1;
		cout << "Введите количество строк в втором массиве: ";
		cin >> N2;
		cout << "Введите количество столбцов в втором массиве: ";
		cin >> M2;
		if (M1 == N2)
		{
			int A[N][N];
			for (i = 0; i < N1; i++)
			{
				for (j = 0; j < M1; j++)
				{
					A[i][j] = rand() % 4;
				}
			}
			cout << "Первый массив: " << endl;
			for (i = 0; i < N1; i++)
			{
				for (j = 0; j < M1; j++)
				{
					cout << setw(5) << A[i][j];
				}
				cout << endl;
			}


			int B[N][N];
			for (i = 0; i < N2; i++)
			{
				for (j = 0; j < M2; j++)
				{
					B[i][j] = rand() % 4;
				}
			}
			cout << endl;
			cout << "Второй массив: " << endl;
			for (i = 0; i < N2; i++)
			{
				for (j = 0; j < M2; j++)
				{
					cout << setw(5) << B[i][j];
				}
				cout << endl;
			}
			cout << endl;


			int C[N][N];
			for (i = 0; i < N1; i++)
			{
				for (j = 0; j < M2; j++)
				{
					C[i][j] = 0;
					for (int k = 0; k < M1; k++)
					{
						C[i][j] += (A[i][k] * B[k][j]);
					}
				}
			}
			cout << endl;
			cout << "Умноженный массив:" << endl;
			for (i = 0; i < N1; i++)
			{
				for (j = 0; j < M2; j++)
				{
					cout << setw(5) << C[i][j] ;
				}
				cout << endl;
			}
			

			
		}
		else cout << endl << "Число столбцов первого массива  должно совпадать с числом строк второго массива" << endl;
		system("pause");
		system("cls");
	}
}