#include <stdio.h>
#include<locale.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	setlocale(LC_ALL, "rus");

	double x, y;
	while (true) {
		int ch;
		ch = getchar();

		if (ch == '1') {

			for (int i = 0; i < 5; i++) {
				switch (i) {
				case 0:
					x = 0.4;
					y = 0.4; break;
				case 1:
					x = 0.5;
					y = -0.5; break;
				case 2:
					x = -1;
					y = -1; break;
				case 3:
					x = -1;
					y = 1; break;
				default:
					x = 1;
					y = 1; break;
				}

				if (x * x + y * y <= 1 && x >= 0 && y >= -1 && y <= 1 || y <= 1 && y >= -1 && x <= 0 && x >= -1) {
					printf("Точка попадает в область\n");
				}
				else {
					printf("Точка не попадает в область\n");
				}
			}
		}

			else if (ch == '2') {
				printf("Введите координату x >");
				scanf_s("%lf", &x);
				printf("Введите координату y >");
				scanf_s("%lf", &y);

				printf("x=%6.3lf;  y=%6.3lf\n", x, y);

				if (x * x + y * y <= 1 && x >= 0 && y >= -1 && y <= 1 || y <= 1 && y >= -1 && x <= 0 && x >= -1) {
					printf("Точка попадает в область\n");
				}

				else {
					printf("Точка не попадает в область\n");

				}
			}
			else if (ch == '3')
			{
				break;
			}

		}
	}




