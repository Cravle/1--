#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <ctime>
#include <iomanip>
#define N 10
using namespace std;
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	FILE* f, * f2;
	int s[N] = { 5,4,6,2,3,1,3,7,6,7 };

	fopen_s(&f, "my1.txt", "w");
	for (int i = 0; i < N; i++)
	{
		fprintf(f, "%2d", s[i]);
	}
	fclose(f);
	int s2[N];
	
	fopen_s(&f, "my1.txt", "r");
	fopen_s(&f2, "my2.txt", "w");
	for (int i = 0; i < N; i++)
	{

		fscanf(f, "%d",&s2[i]);
		fprintf(f2, "%3d", s2[i]);
		
	}
	fclose(f);
	fclose(f2);
	for (int i = 0; i < N; i++)
	{
		printf("%2d", s2[i]);
	}
	int x;
	cout << endl;
	fopen_s(&f2, "my2.txt", "r");
	for (int i = 0; i < N; i++)
	{
		x = s2[i];
		printf("%2d", x);
	}
	fclose(f2);
	cout << endl;

	return 0;


}

