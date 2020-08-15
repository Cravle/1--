#include "minmax.h"

void minmax::SetYk(int* a, int* b, int* c) {
	int mas1[3] = { *a,*b,*c };
	int minimal = INT_MAX;
	int maximum = INT_MIN;
	int min;
	int max;
	for (int i = 0; i < 3; i++) {
		if (mas1[i] < minimal) {
			minimal = mas1[i];
			min = i;
		}
		if (mas1[i] > maximum) {
			maximum = mas1[i];
			max = i;
		}
	}
	swap(mas1[max], mas1[min]);
	*a = mas1[0];
	*b = mas1[1];
	*c = mas1[2];
}



void minmax::SetSilk(int& a, int& b, int& c) {
	int mas2[3] = { a,b,c };
	int minimal = INT_MAX;
	int maximum = INT_MIN;
	int min;
	int max;
	for (int i = 0; i < 3; i++) {
		if (mas2[i] < minimal) {
			minimal = mas2[i];
			min = i;
		}
		if (mas2[i] > maximum) {
			maximum = mas2[i];
			max = i;
		}
	}
	swap(mas2[max], mas2[min]);
	a = mas2[0];
	b = mas2[1];
	c = mas2[2];
}