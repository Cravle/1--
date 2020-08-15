#include "Complex.h"

void Complex::setRM(int real, int img) {
	r = real;
	m = img;
}

void Complex::add(int a, int b) {
	r += a;
	m += b;
}

void Complex::sum(int real, int img) {
	r += real;
	m += img;
}

void Complex::print() {
	if (r == 0) {
		cout << m << "i" << endl;
	}
	else if (m == 0) {
		cout << r << endl;
	}
	else {
		cout << r << " + " << m << "i" << endl;
	}
}