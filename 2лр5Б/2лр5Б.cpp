
#include "Func.h"

using namespace std;

int main()
{

	setlocale(LC_ALL, "rus");
	while (true) 
	{

	
		srand(time(NULL));
		int N;
		cout << "Введите кол-во елементов в масиве:" << endl;
		cin >> N;
		int** A = new int* [N];
		for (int i = 0; i < N; i++) {
			A[i] = new int[N];
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				A[i][j] = rand() % 15 - 5;
			}
		}	for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << setw(4) << A[i][j] ;
			}
			cout << endl;
		}

		int(*p)(int**, int);
		p = Foo1;
		cout << "Сума положительных елементов масива:" << p(A, N) << endl;

		p = Foo2;
		cout << "Произведение отрицательных елементов масива:" << p(A, N) << endl;

		for (int i = 0; i < N; i++)
		{
			delete[] A[i];
		}
		delete[] A;
		A = nullptr;
		p = nullptr;

		system("pause");
		system("cls");
	}
	return 0;


}

