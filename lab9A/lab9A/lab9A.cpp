#include<iostream>
#include<ctime>
#include<iomanip>
#define N 5


const int r = 20; //число рандома

using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int A[N][N];
	int B[N][N];
	int C[N][N];

	while (true) {


		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				A[i][j] = rand() % r + 1;
				B[i][j] = A[i][j];
				C[i][j] = A[i][j];
			}
		}

		cout << "Исходный массив " << endl;
		for (int i = 0; i < N; i++) {
			if (i == 0) cout << setw(4);
			for (int j = 0; j < N; j++) {

				cout << A[i][j] << setw(4);
			}
			cout << endl;
		}
		cout << endl;

		int max;
		for (int i = 0; i < N; i++)
		{
			max = 1;
			int indmax;
			for (int j = 0; j < N; j++)
			{
				if (B[i][j] > max)
				{
					max = B[i][j];
					indmax = j;

				}
			}
			swap(B[i][0], B[i][indmax]);

		}
		cout << "Максиимальный в начале строки" << endl;
		for (int i = 0; i < N; i++)
		{
			if (i == 0) cout << setw(4);
			for (int j = 0; j < N; j++)
			{
				cout << B[i][j] << setw(4);
			}
			cout << endl;
		}
		cout << endl;
		int min;
		for (int j = 0; j < N; j++)
		{
			min = r;
			int indmin;
			for (int i = 0; i < N; i++) {
				if (C[i][j] < min) {
					min = C[i][j];
					indmin = i;
				}
			}
			swap(C[N - 1][j], C[indmin][j]);
		}
		cout << "Минимальный в конце столбца" << endl;
		for (int i = 0; i < N; i++)
		{
			if (i == 0) cout << setw(4);
			for (int j = 0; j < N; j++)
			{
				cout << C[i][j] << setw(4);
			}
			cout << endl;

		}
		system("pause");
		system("cls");
	}
	
}