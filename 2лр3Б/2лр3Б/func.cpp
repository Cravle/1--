#include "main.h"

using namespace std;

void print(int n, int A[N])
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << *(A + i);
	}
	cout << endl;
}

void fill(int n, int A[N], int M[N], int* k)
{

	for (int i = 0; i < n; i++)
	{
		*(A + *k) = *(M + i);
		(*k)++;
	}
}