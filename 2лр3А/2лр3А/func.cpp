#include "main.h"

using namespace std;

void absol(int A[])
{
	int sum = 0;//сумма отрицательных
	int t = 0;//кол-во отрицательных
	cout << "Абсолютная" << endl;
	for (int i = 0; i < N; i++)
	{
	
		cout << setw(4) << *(A + i);
	}

	cout << endl;

	for (int i = 0; i < N; i++)
	{
		if (*(A + i) < 0)
		{
			t++;
			sum += *(A + i);
		}
	}

	cout << "Кол-во отрицательных = " << t << endl;
	cout << "Сумма отрицательных = " << sum << endl;
	cout << "\n\n";
}

void otnos(int A[])
{
	int sum = 0;//сумма отрицательных
	int t = 0;//кол-во отрицательных
	int* p;
	p = A;
	cout << "Относительная" << endl;
	for (int i = 0; i < N; i++)
	{
		
		cout << setw(4) << *p;
		p++;
	}

	cout << endl;

	p = A;
	for (int i = 0; i < N; i++)
	{
		if (*p < 0)
		{
			t++;
			sum += *p;
			
		}
		p++;
	}

	cout << "Кол-во отрицательных = " << t << endl;
	cout << "Сумма отрицательных = " << sum << endl;
	cout << "\n\n";
}

void bez(int A[])
{
	int sum = 0;//сумма отрицательных
	int t = 0;//кол-во отрицательных
	int* p;
	p = A;
	cout << "Без индексации" << endl;
	for (p = A; p < A + N; p++)
	{
		
		cout << setw(4) << *p;
		
	}

	cout << endl;

	p = A;
	for (p = A; p < A + N; p++)
	{
		if (*p < 0)
		{
			t++;
			sum += *p;

		}
		
	}

	cout << "Кол-во отрицательных = " << t << endl;
	cout << "Сумма отрицательных = " << sum << endl;
	cout << "\n\n";
}

void masukaz(int A[])
{
	int sum = 0;//сумма отрицательных
	int t = 0;//кол-во отрицательных
	int* p[N];
	for (int i = 0; i < N; i++)
	{
		p[i] = &A[i];
	}
	
	cout << "Массив указателей " << endl;
	for (int i = 0; i < N; i++)
	{

		cout << setw(4) << *p[i];
		
	}

	cout << endl;


	for (int i = 0; i < N; i++)
	{
		if (*p[i] < 0)
		{
			t++;
			sum += *p[i];

		}

	}

	cout << "Кол-во отрицательных = " << t << endl;
	cout << "Сумма отрицательных = " << sum << endl;
	cout << "\n\n";
}

void ukazukaz(int A[])
{
	int sum = 0;//сумма отрицательных
	int t = 0;//кол-во отрицательных
	int* p[N];
	int** pp = p;
	for (int i = 0; i < N; i++)
	{
		p[i] = &A[i];
	}

	cout << "Массив указателей " << endl;
	for (int i = 0; i < N; i++)
	{

		cout << setw(4) << *(*pp+i);

	}

	cout << endl;


	for (int i = 0; i < N; i++)
	{
		if (*(*pp + i) < 0)
		{
			t++;
			sum += *(*pp + i);

		}

	}

	cout << "Кол-во отрицательных = " << t << endl;
	cout << "Сумма отрицательных = " << sum << endl;
	cout << "\n\n";
}