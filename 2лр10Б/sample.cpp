#include "sample.h"
sample::sample() 
{
	a = 300;
	b = 200;
	c = 100;
}

sample::sample(int x, int y, int z)
{
	a = x;
	b = y;
	c = z;
}

void sample::show(void)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

}

void sample::foo(int* x, int* y,int *z) 
{
	int* mas;
	mas = new int[3];
	cout << (mas[1] = *x);
	cout << (mas[2] = *y);
	cout << (mas[3] = *z);


	/*int *temp;
	temp = min;
	min = max;
	max = temp;*/
}

void sample::boo(int& min, int& max)
{
	int& temp = min;
	min = max;
	max = temp;
}

