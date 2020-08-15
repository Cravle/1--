#include "sample.h"

int main(void) {
	setlocale(LC_ALL, "rus");

	sample a(600, 500, 400);
	sample b;
	a.show;
	b.show;

	a.foo(600,500,400)
}
