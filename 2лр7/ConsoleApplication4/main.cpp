#include "main.h"
#include "struct.h"


int main(void) {

	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//struct sport x; /* рабочая переменная */

	while (true) {
		FILE* f;
		sport mm[10];
		int i, j; /* текущие индексы в массиве */
		int m;    /* индекс минимального элемента */
		char menu;
		char menu2;
		char menu3;
		int n;
		char* S1 = new char[128];
		cout << "1 – ввод с экрана, 2 – случайным образом\n";
		cout << "3 - добавить строку в начало файла, 4 - добавить строку в конец файла \n";
		cout << "5 - вывод одной строки, 6 - полный вывод\n";
		cout << "7 - выход\n";
		cin >> menu;
		if (menu == '1')  //Ввод с экрана
		{
			write(mm, &n);
		}

		else if (menu == '2') {
			random(mm, &n);
			cout << "Сгенерировалось " << n << " строк" << endl;
		}
		
		else if (menu == '3') {

			add__first();

		}

		else if (menu == '4') {
			printf("Введите строку >> ");
			cin >> S1;
			fopen_s(&f, "sport.txt", "ab");
			
			fwrite(S1, strlen(S1), 1, f);
			fclose(f);
		}

		else if (menu == '5') {
			print__one();
		}


		else if (menu == '6') {
			print__all();
			cout << endl;
		}

		else if (menu == '7')break;
		else cout << "error" << endl;

		delete[] S1;


		system("pause");
		system("cls");

	}
}