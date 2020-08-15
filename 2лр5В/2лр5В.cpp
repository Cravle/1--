
#include "sort.h"

int main()
{
	setlocale(LC_ALL, "rus");
	while (true)
	{
		srand(time(NULL));

		int N;
		cout << "Введите кол-во елементов в маcсиве:" << endl;
		cin >> N;
		int* A = new int[N];
		for (int i = 0; i < N; i++) {
			A[i] = rand() % 10 - 5;
		}
		for (int i = 0; i < N; i++) {
			cout << A[i] << setw(4);
		}
		cout << endl;
		int menu = 0;
		cout << "1 - вставка 2 - пузырек " << endl;
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "Сортировка вставками:" << endl;
			Sort(A, N, vstavkaSort);
			break;
		case 2:
			cout << "Сортировка пузырьком" << endl;
			Sort(A, N, bubbleSort);
			break;
		}
		cout << "_________________________________________________________________" << endl;


		delete[] A;
		A = nullptr;
	}

}