#include "func.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	while (true) {
		srand(time(NULL));
		

		int N, M;
		int glavd = 0;
		int pobd = 1;

		cout << "Введите размер массива" << endl;
		cin >> N;
		if (N == 0)break;
		M = N;

		int** Ar = new int* [N];
		int* min = new int[M];
		int* max = new int[N];
		int* Br = new int[2];
		for (int i = 0; i < N; i++) {
			Ar[i] = new int[M];
		}

		fill__ar(Ar, N, M);

		printf("Начальный массив:\n");

		print__dm(Ar, N, M);

		foo(Ar, N, M, min, max);



		cout << "Массив min эл" << endl;
		print__om(min, M);
		cout << "Массив max эл" << endl;
		print__om(max, N);

		

		Br = boo(Ar, N, M, min, max, &glavd, &pobd);

		cout << "Итоговый массив:";

		for (int i = 0; i <  2; i++)
		{
			cout << setw(4) << Br[i];
		}

		cout << endl;


		//Освобождение памяти
		delete[] min;
		delete[] max;
		delete[] Br;
		for (int i = 0; i < N; i++)
		{
			delete[] Ar[i];
		}
		delete[] Ar;
		system("pause");
		system("cls");
	}
}

