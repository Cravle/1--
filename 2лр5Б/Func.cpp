#include "Func.h"
int Foo1(int** A, int N) {

	int sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (A[i][j] >= 0) {
				sum += A[i][j];
			}

		}
	}

	return sum;
}

int Foo2(int** A, int N) {
	int mul = 1;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (A[i][j] < 0) {
				mul *= A[i][j];
			}

		}
	}

	return mul;
}