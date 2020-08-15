#include "sort.h"


int Sort(int* A, int N, int(*p)(int*, int)) {
	p(A, N);
	cout << endl << "Массив с результатом: " << endl;
	for (int i = 0; i < N; i++) {
		cout << A[i] << setw(4);
	}
	cout << endl;
	return 0;
}

int bubbleSort(int* A, int N) {

	for (int i = N - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			if (A[j] > A[j + 1])
			{
				int tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
	}
	return *A;
}

int vstavkaSort(int* A, int N) {

	int counter = 0;
	for (int i = 1; i < N; i++) {
		for (int j = i; j > 0 && A[j - 1] > A[j]; j--) {
			counter++;
			int tmp = A[j - 1];
			A[j - 1] = A[j];
			A[j] = tmp;
		}
	}

	return *A;
}