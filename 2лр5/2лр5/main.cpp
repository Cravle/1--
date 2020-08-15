#include "main.h"

using namespace std;

int main(void) {
	setlocale(LC_ALL, "rus");

	int sum, sum1, sum2;


	srand(time(NULL));  /* инициализация rand */
	while (true) {
		int N = 5; // размер массива
		cout << "Введите размер квадратной матрицы: ";
		cin >> N;

#ifdef __DEBUG__
//////////////////// ДМ КАК ДМ
		int** Ar = new int* [N]; 
		for (int i = 0; i < N; i++) {
			Ar[i] = new int[N];
		}
		fill_DM(Ar, N);
		solve_DM(Ar, N);
		printf("Переделанный массив:\n");
		print_DM(Ar, N);
		for (int i = 0; i < N; i++)
		{
			delete[] Ar[i];
		}
#else
////////////////////////ДМ КАК ОМ
		int* Ar = new int[N * N]; // создание ДМ как ОМ

		fill_OM(Ar, N);
		solve_OM(Ar, N);
		printf("Переделанный массив:\n");
		print_OM(Ar, N);
#endif // DEBUG



		delete[] Ar;

		system("pause");
		system("cls");
	}
}