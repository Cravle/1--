#include <iostream>
#include <iomanip>
#include <ctime>

#define N  20

using namespace std;

int Ar1[N];
int Ar2[N / 2];




void mas() {
	srand(time(NULL));
	cout << "Начальный массив:" << endl;
	for (int i = 0; i <= N; i++) {

		Ar1[i] = rand() % 11;
		cout << setw(4) << Ar1[i];
	}
}

void per(int i = 0) {

	Ar2[i] = Ar1[2 * i];
	cout << setw(4) << Ar2[i];

	if (i < N / 2) per(i + 1);
}

int main(void) {
	setlocale(LC_ALL, "rus");
	for (;;) {
		mas();
		putchar('\n');
		cout << "Массив четных индексов" << endl;
		per();
		putchar('\n');
		
		system("pause");
		system("cls");
	}
}