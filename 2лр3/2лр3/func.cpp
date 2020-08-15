#include "main.h"

using namespace std;

void print(int* Ar, int* p1) {
	p1 = Ar;
	for (int i = 0; i < N; i++)
	{
		
		cout << setw(4) << *p1;
		p1++;
	}
}

void print2(int* Br, int k, int* p2)
{
	p2 = Br;
	for (int i = 0; i < k; i++)
	{
		cout << setw(4) << * p2;
		p2++;
	}
}
