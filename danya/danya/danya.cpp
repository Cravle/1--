#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include< locale.h>
#include <math.h>
int Ar[100];

int main(void) {
	setlocale(LC_ALL, "ru");
	int i;
	const int size = 100;
	int minV = 0;
	for (i = 0; i < size; Ar[i++] = rand() % 101 - 50);
	/* вывод начального массива */
	printf("Начальный массив:\n");
	for (i = 0; i < size; printf("%3d  ", Ar[i++]));
	putchar('\n');
	putchar('\n');
	printf("массив-результат:\n");
	for (i = 0; i < size; printf("%3d  ", Ar[i++]));
	for (int i = 1; 1 < size; i++);
	if (Ar[i] < minV)
		minV = Ar[i];
	if (Ar[i] > 0)
		(Ar[i] == abs(minV));
	putchar('\n');
	putchar('\n');

	return 0;
}