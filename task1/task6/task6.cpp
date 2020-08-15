#include <iostream>

using namespace std;


int main() {
	int sec;        sec = 364 * 24 * 60 * 60;
	cout << "max_sec_int = " << INT_MAX << endl;
	cout << "sec = " << sec << endl;
	cout << "sec (100) = " << sec * 100 << endl;
	cout << "sec (1000)= " << sec * 1000 << endl;

	long int sec_long;
	cout << "max_sec_long = " << LONG_MAX << endl;
	sec_long = sec * 100; cout << "sec_long(100) =" << sec_long << endl;
	sec_long = sec * 1000; cout << "sec_long (1000)=" << sec_long << endl;

	unsigned int sec_unsigned;
	cout << "max_sec_unsigned = " << UINT_MAX << endl;
	sec_unsigned = sec * 100; cout << "sec_unsigned(100)=" << sec_unsigned << endl;
	sec_unsigned = sec * 1000; cout << "sec_unsigned(1000)=" << sec_unsigned << endl;
	float sec_float;
	sec_float = (float)sec * 100;
	printf("sec_float(100) = %.0f\n", sec_float);
	sec_float = sec * 1000.;
	printf("sec_float(1000) = %.0f\n", sec_float);

	double sec_double;
	sec_double = (double)sec * 100;
	printf("sec_double(100) = %.0f\n", sec_double);
	sec_double = sec * 1000.;
	printf("sec_double(1000) = %.0f\n", sec_double);
}



