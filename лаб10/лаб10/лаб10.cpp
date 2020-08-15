#include <iostream>
#include <ctime>
#include <iomanip>
#include <locale.h>
#include <windows.h>

#define N 5

using namespace std;

void umn(int Ar1[]) {
	int Ar2[N][N];
	int Ar4[N][N];
	cout << "Начальный двумерный массив:" << endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			Ar2[i][j] = Ar1[i * N + j];
			cout << setw(4) << Ar2[i][j];
		}
		putchar('\n');
	}

	cout << "Умноженный массив:" << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			Ar4[i][j] = 0;
			for (int k = 0; k < N; k++)
				Ar4[i][j] += (Ar2[i][k] * Ar2[k][j]);
			cout << setw(4) << Ar4[i][j];

		}
		putchar('\n');
	}
	
	for (int i = 0; i < N; i++) { // преобразование умноженного двумерного массива в одномерный
		for (int j = 0; j < N; j++) {
			Ar1[i * N + j] = Ar4[i][j];
		}

	}
}



int main(void) {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int Ar1[N * N];

	for (;;) {
		srand(55/*time(NULL)*/);
		cout << "Начальный массив:" << endl;
		for (int i = 0; i < N * N; i++) {

			Ar1[i] = rand() % 4;
			cout << setw(4) << Ar1[i];
		}

		putchar('\n');
		putchar('\n');


		umn(Ar1);
		cout << "Преобразованный одномерный массив:" << endl;
		for (int i = 0; i < N * N; i++) {
			cout << setw(4) << Ar1[i];
		}
		putchar('\n');

		system("pause");
		system("cls");

	}

}