#pragma once

#ifndef __FIGURE__H
#define __FIGURE__H


#include <iostream>
#define pi 3.14

using namespace std;
class Figure {

private:
	int x;
	int h;
	
	

public:
	Figure(int);
	Figure(int, int);
	

	void print1();

	void print2();
};

#endif // !__FIGURE__H