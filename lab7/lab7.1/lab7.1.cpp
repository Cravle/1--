#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include<iostream>

int main(void) {
	setlocale(LC_ALL, "Rus");


	short n; /* параметр внешнего цикла */
	double x, y;
	short h; /* позиция точки на экране, смещение в строке символа, который означает точку графика. */

	for (n = 0; n < 5; n++) {
		printf("|   x   |      y     |\n");
		printf("|-------|------------|\n");
		for (x = 0; x <= 4; x += 0.25) {
			if (x <= 1) {
				y = 2;

				printf("| %5.2lf | %10.7lf |", x + n * 4, y);             /* строку выходных данных*/
				h = (y + 1) * 10;                                        /*  вывод в той же строку точки графика.*/

				for (; h > 0; h--) {                                     /*  Далее в строку экрана выводится требуемое количество пробелов*/
					printf(" ");
				}
				printf("*\n");
				if (x == 1) {
					printf("| %5.2lf | %10.7lf |", x + n * 4, y);
					h = 6;
					for (; h > 0; h--) {
						printf(" ");
					}
					for (int i = 0; i <= 12; i++) {                  /*  вывожу прямую х=1*/
						printf("*");
						printf(" ");
					}
					printf("\n");
					continue;
				}
			}
			else if (x < 3) {

				y = 0 - sqrt(1 - (x - 2) * (x - 2));

				printf("| %5.2lf | %10.7lf |", x + n * 4, y);
				h = (y + 1) * 10;

				for (; h > 0; h--) {
					printf(" ");
				}
				printf("*\n");
			}
			else {

				y = x + 3;

				printf("| %5.2lf | %10.7lf |", x + n * 4, y);
				h = (y + 1) * 10;

				for (; h > 65; h--) {
					printf(" ");
				}
				printf("*");
				if (x == 4)
				{
					printf(" ");
					for (int i = 0; i <= 6; i++) {
						printf(" *");
					}
					printf("\n");
				}
				printf("\n");
			}
		}

	}
	printf("Нажмите клавишу Enter...");

	return 0;
}





