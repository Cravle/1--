#include "func.h"

using namespace std;

void fill__ar(int **Ar, int N, int M)
{
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < M; j++)
		{

			Ar[i][j] = rand() % 5+1;
		}
	}
}

void print__dm(int** Ar, int  N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << setw(4) << Ar[i][j];
		}

		cout << endl;
	}
	
}



void foo(int** Ar, int N, int M, int *min, int *max)
{
	//нахождение max в строке
	for (int i = 0; i < N; i++)
	{
		int tmax = 0;
		
		for (int j = 0; j < M; j++)
		{
			if (Ar[i][j] > tmax) {
				tmax = Ar[i][j];
			}

		}

		max[i] = tmax;
	}
	//нахождение min в столбце
	for (int j = 0; j < M; j++)
	{

		int tmin = 20;
		for (int i = 0; i < N; i++)
		{
			if (Ar[i][j] < tmin) {
				tmin = Ar[i][j];
			}
		}
		min[j] = tmin;
	}
}

void print__om(int* Ar, int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << Ar[i];
	}
	cout << endl;
}






int* boo(int** Ar, int N, int M, int* min, int* max, int* sumgd, int* proizpd) {
	int* Br = new int[2];
	int t = 0;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (i == j) *sumgd += Ar[i][j];
		}
	}
	cout << "sum = " << *sumgd << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (i + j == N - 1) *proizpd *= Ar[i][j];
		}
	}
	cout << "  proiz = " << *proizpd << endl;
	/*for (int i = 0; i < M; i++, j++) {
		Br[j] = min[i];
	}
	for (int i = 0; i < N; i++, j++) {
		Br[j] = max[i];
	}*/
	Br[t] = *sumgd;
	Br[t + 1] = *proizpd;
	for (int i = 0; i < N; i++)
	{
		return Br;
	}
	
	delete[] Br;
		
}