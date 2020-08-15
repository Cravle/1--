#pragma once
#ifndef __SAMPLE__H
#define __SAMPLE__H

#include <iostream>;

using namespace std;

class sample 
{
private:
	int a;
	int b;
	int c;

public:
	sample();
	sample(int x, int y, int z);
	void show(void);
	void foo(int* x, int* y, int* z);
	void boo(int& min, int& max);
};
#endif // !__SAMPLE__H
