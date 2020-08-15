#pragma once
#ifndef __MAIN__H
#define __MAIN__H

#include <iostream>


using namespace std;


class SUM {
private:
	int x;
	int y;
	int sum;

public:
	SUM() {
		x = 0;
		y = 0;

	}
	SUM(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}

	void setA(int valueX) 
	{
		x = valueX;
	}

	void setB(int valueY)
	{
		y = valueY;
	}

	void get() 
	{
		cout << "1 число = " << x << endl;
		cout << "2 число = " << y << endl;
		
	}

	void getSum()
	{
		sum = x + y;
		cout << "sum = " << sum << endl;
	}

};
#endif // !__MAIN__H
