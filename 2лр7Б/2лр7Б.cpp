
#include<iostream>
#include<iomanip>
#include<stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{

	setlocale(LC_ALL, "Russian");
	FILE* f;
	int sum = 0;
	int mas2[10];
	int mas1[10] = { 5,5,6,7,3,1,6,7,8,7 };

	fopen_s(&f, "my.dat", "wb");
	for (int i = 0; i < 10; i++)
	{
		fwrite(&mas1[i], sizeof(int), 1, f);
	}
	fclose(f);

	fopen_s(&f, "my.dat", "rb");
	cout << "mas2 = ";
	for (int i = 0; i < 10; i++) {
		fread(&mas2[i], sizeof(int), 1, f);
		if (mas2[i] % 2 == 0) {
			sum += mas2[i];
		}

		cout << mas2[i] << setw(4);
	}
	fclose(f);
	cout << endl << "Sum = " << sum << endl;

	system("pause");
	return(0);

}