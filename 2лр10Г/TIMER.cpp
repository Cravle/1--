#include "TIMER.h"

TIMER::TIMER(int value) {
	sec = value;
}
TIMER::TIMER(int valueMinut, int valueSec)
{
	sec = valueSec + (valueMinut * 60);
}

TIMER::TIMER(TIMER& other) 
{
	this->sec = other.sec;
}

void TIMER::show(void)
{
	cout << sec << " секунд" << endl;
}