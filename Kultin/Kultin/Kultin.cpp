#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

#define N 3
#define M 5


int main() {
	setlocale(LC_ALL, "rus");

	int A[N][M];
	int sum = 0;
	int max = 0;
	int min = 0;
	
	srand(time(NULL));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			A[i][j] = rand() % 23;
			cout << setw(4) << A[i][j] ;
			

		}
		
		
		cout << endl;
		
	}


	for (int i = 0; i < N; i++) {
		sum = 0;

		for (int j = 0; j < M; j++) {
			
			
			sum += A[i][j];
			
		}
		cout << sum << endl;
		if (sum > max)max = sum;
		
		
	}
	cout << max;


	

}