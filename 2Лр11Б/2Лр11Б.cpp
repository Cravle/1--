#include "Figure.h"


using namespace std;



int main()
{
	setlocale(LC_ALL, "ru");

	Figure X(3,5);
	X.print1();

	Figure Z(6);
	Z.print2();

	return 0;

}

