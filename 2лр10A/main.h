#pragma once

#ifndef __MAIN_H
#define __MAIN_H



#include <iostream>


using namespace std;

class Figure
{

private:
	int a;
	int b;

public:
	
	
	void Result(int valueA, int valueB = 0)
	{
	
		
		if (valueB == 0) {
			a = valueA;
			cout << "Площадь = " << a * a << endl;
		}
		else if (valueB != 0) {
			a = valueA;
			b = valueB;
			cout << "Площадь = " << a * b << endl;
		}

	}
	
};

#endif // !__MAIN_H__
