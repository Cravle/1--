#include <iostream>
#include <iomanip>

#define N 3
#define M 5

using namespace std;

void fill(int ar[N][M]) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			ar[i][j] = rand() % 10 - 5;
		}
	}
}

void show(int ar[N][M]) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << setw(4) << ar[i][j];
		}
		putchar('\n');
	}
}

int znak(int ar[N][M], int i)
{
	int t = 0;
	for (int j = 0; j < M; j++)
	{
		if (ar[i][j] > (-1))
		{
			t++;
		}
	}

	return t;
}


void main()
{
	setlocale(LC_ALL, "rus");

	int ar[N][M];

	while (true) {

		fill(ar);
		show(ar);


		for (int i = 0; i < N; i++)
		{
			cout << "На " << (i + 1) << " строке: " << znak(ar, i) << endl;
		}
		system("pause");
		system("cls");
	}
}


