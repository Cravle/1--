#include "main.h"

using namespace std;



int main(void)
{
	setlocale(LC_ALL, "rus");

	int Ar[N]; // начальный массив 
	int Br[N]; // массив отрицательных чисел

	

	for (;;) {
		srand(time(NULL));
		int t = 0; // рабочая переменная
		int k = 0; // рабочая переменная счетчик
		int r = 0;// index
		int l = 0;// index 2

		int* p1; // указатель на массив
		int* p2; // указатель на массив отрицательных чисел
		int* max;// указатель на мах эл 
		

		p1 = Ar;
		p2 = Br;
		max = Ar;

		for (int i = 0; i < N; i++) // заполнение массива
		{
			*p1 = rand() % 30 - 10;
			p1++;
		}
		cout << "Начальный массив :" << endl;
		print(Ar, p1);

		cout << "\n\n";
		// НАХОЖДЕНИЕ МАХ
		p1 = Ar;

		for (int i = 0; i < N; i++)
		{
			if (*p1 > * max)
			{
				max = p1;
				r = i;
			}
			p1++;

		}



#ifdef DEBUG
		cout << "max = " << *max << endl;
		cout << "индекс max = " << r << endl;
		cout << "\n\n";
#endif // DEBUG
		// СВАП С ПЕРВЫМ ЧЕТНЫМ ЧИСЛОМ
		p1 = Ar;
		for (int i = 0; i < N; i++)
		{
			if ((*p1 % 2) == 0)
			{
				l++;
				t = *p1;
				*p1 = *max;
				*max = t;
				break;
			}
			p1++;
			l++;

		}

#ifdef DEBUG
		cout << "первое четное = " << t << endl;
		cout << "индекс четного = " << l << endl;
		cout << "\n\n";
#endif // DEBUG

		cout << " Новый массив :" << endl;
		print(Ar, p1);
		cout << "\n\n";

		// СОЗДАНИЕ МАССИВА ОТРИЦАТЕЛЬНЫХ ЧИСЕЛ
		p1 = Ar;

		for (int i = 0; i < N; i++)
		{
			if (*p1 < 0)
			{
				*p2 = *p1;
				k++;
				p2++;
			}
			p1++;

		}

		cout << "Массив отрицательных чисел:" << endl;
		print2(Br, k, p2);
		cout << "\n\n";


		system("pause");
		system("cls");

	}
}

