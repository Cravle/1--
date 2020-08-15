
#include "func.h"
#include "struct.h"


int main(void) {

	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	struct sport* head = NULL;


	while (true) {
		FILE* f;
		sport mm[10];
		int i, j; /* текущие индексы в массиве */
		int m;    /* индекс минимального элемента */
		int b = 0;
		char menu;
		char menu2;
		char menu3;
		int n;
		char* S1 = new char[128];
		cout << "1. Создание списка" << endl;
		cout << "2. Печать списка" << endl;
		cout << "3. Поиск по критерию" << endl;
		cout << "4. Добавление элемента" << endl;
		cout << "5. Удаление элемента" << endl;
		cout << "6. Сортировка" << endl;
		cout << "7. Запись нового списка в файл" << endl;
		cout << "8. Печать нового списка из файла" << endl;
		cout << "9. Завершение программы" << endl;
		cin >> menu;
		if (menu == '1')  //Ввод с экрана
		{
			head = create();


		}

		else if (menu == '2') {
			list(head);
		}

		else if (menu == '3') {

			cout << endl;
			cout << "Нажмите 1 если хотите найти по фамилии участника" << endl;
			cout << "Нажмите 2 если хотите найти по коду участника" << endl;
			cin >> b;
			if (b == 1) {
				task3(head);
			}
			if (b == 2) {
				task31(head);
			}

		}

		else if (menu == '4') {
			int N;
			cout << "Введите номер после которого хотите добавить структуру >";
			cin >> N;
			if (N != 0) {
				task4(head, N);
			}
			else if (N == 0) {
				task41(&head);
			}

		}

		else if (menu == '5') {
			int M;
			cout << "Введите номер который хотите удалить >";
			cin >> M;
			if (M != 1) {
				task5(head, M);
			}
			else if (M == 1) {
				task51(&head);
			}

		}


		else if (menu == '6') {
			task6(head);
		}

		else if (menu == '7') {
			task7(head);
		}

		else if (menu == '8') {
			head = task8();
		}

		else if (menu == '9') {
			free(head);
			break;
		}




		
		system("pause");
		system("cls");

	}
}