#pragma once

#ifndef __TIMER__H
#define __TIMER__H

#include <iostream>

using namespace std;

class TIMER 
{
private:
	int sec;
public:

	TIMER(int value);
	TIMER(int valueSec, int valueMinut);
	TIMER(TIMER& other);
	void show(void);
};
#endif // !__TIMER__H
