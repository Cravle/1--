#include "Numbers.h"

Numbers::Numbers(int x)
{
	this->x = x;
}

int Numbers::getX() {
	return x;
}

Numbers7::Numbers7(int x) : Numbers(x) {

}



int Numbers7::getA() {
	return a;
}


Numbers5::Numbers5(int x) : Numbers7(x) {
	if (b == 2 && Numbers7::getA() == 3)
		cout << setw(4) << Numbers::getX();
}