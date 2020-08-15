#include <stdio.h> 
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "rus");
	/* параметры, которые вводятся */
	double x, y;
	/* параметры, которые задаются в программе */	
	double a = 12.5, b = 1.3;
	double t1, t2;   /* результаты */
	/*double t3;*/
	double ax, ctg;       /* рабочие переменные */

	printf("Введите x, y >");
	scanf_s("%lf %lf", &x, &y);

	if (y > 0 && x > 0 || y < 0 && x < 0  ) {	
		ax = a * x;
		t1 = a * (1 / (pow(b, 2) * y) + 1 / (ax * pow(b, 2)) - 2 / (pow(b, 3)) * log(y / x));

		ax = a * x / 2;
		ax = ax * 3,14 / 180; // перевод из радиан в градусы
		ctg = cos(ax) / sin(ax);
		t2 = (1 / 2) * ctg + 1 / (6 * a) * pow(ctg, 3);

		printf("t1 = %lg\n", t1);
		printf("t2 = %lg\n", t2);
	}
	
	

	else {
		printf("Введите y > 0");
	}


	return 0;
}