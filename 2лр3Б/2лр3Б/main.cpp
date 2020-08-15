#include "main.h"

using namespace std;



int main() {
	setlocale(LC_ALL, "rus");
	int A[N];
	int B[N];
	int C[N];
	int D[N];
	srand(time(NULL));
	for (;;) {
		int b = 0, c = 0, d = 0; // кол-во эл массивов

		int k = 0;



		for (int i = 0; i < N; i++)
		{
			*(A + i) = rand() % 30 - 10;

		}
		print(N, A);

		for (int i = 0; i < N; i++)
		{
			if (*(A + i) < 0) {
				*(B + b) = *(A + i);
				b++;

			}

			else if (*(A + i) > 0) {
				*(C + c) = *(A + i);
				c++;
			}

			else {
				*(D + d) = *(A + i);
				d++;
			}
		}
#ifdef DEBUG
		cout << "Массив B<0:\n";
		print(b, B);
		cout << "Массив C>0:\n";
		print(c, C);
		cout << "Массив D=0:\n";
		if (d == 0) cout << "пустой массив" << endl;
		print(d, D);
#endif // DEBUG

		fill(b, A, B, &k);
		fill(d, A, D, &k);
		fill(c, A, C, &k);


		cout << "Отсортированный массив:\n";
		print(N, A);


		system("pause");
		system("cls");


	}
}