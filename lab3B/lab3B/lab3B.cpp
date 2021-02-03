#include "Numbers.h"

//Генерация 10 сулчайных чисел

int main()
{
	srand(time(NULL));
	
	setlocale(LC_ALL, "rus");
	for (int i = 0; i < 100; i++)
	{
		Numbers5 a(i);
	}
	cout << endl;
		
		
		system("pause");
		system("cls");
	

}