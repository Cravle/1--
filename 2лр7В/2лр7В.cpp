#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	FILE* f1;
	FILE* f2;
	int min = 15;
	fopen_s(&f1, "my.txt", "w");
	int x;
	int k = 0, sum = 0, SA;

	if (!f1)
	{
		cout << "Error"; exit(0);
	}
	for (int i = 0; i < 20; i++)
	{

		x = rand() % 10;
		fwrite(&x, sizeof(int), 1, f1);
		if (x == 2 || x == 5 || x == 9) {
			sum += x;
		}
	}cout << "Сумма:" << sum << endl;

	fclose(f1);
	int temp = 1;
	fopen_s(&f1, "my.txt", "r");
	for (int i = 0; i < 20; i++)
	{
		fread(&x, sizeof(int), 1, f1);
		cout << x << " ";
		if (x < min) {
			min = x;
			temp++;
		}

	}
	cout << endl << "Минимальное число: " << min << endl;
	fclose(f1);

	fopen_s(&f1, "my.txt", "r+");
	fseek(f1, temp * sizeof(int), SEEK_SET);
	fread(&x, sizeof(int), 1, f1);
	int n = 999;
	fseek(f1, temp * sizeof(int), SEEK_SET);
	fwrite(&n, sizeof(int), 1, f1);


	fclose(f1);
	fopen_s(&f1, "my.txt", "r");
	for (int i = 0; i < 20; i++)
	{
		fread(&x, sizeof(int), 1, f1);
		cout << x << " ";

	}

	fclose(f1);

	return 0;

}