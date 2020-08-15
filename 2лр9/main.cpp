#include "func.h"
#include "struct.h"
struct sport* head = NULL, * tail = NULL;
int main(void) {

	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	while (true) {
	
		

		
		char menu;
		char menu2;
		int b;
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
			create();


		}

		else if (menu == '2') {
			cout << "1 - Печать с начала, 2 - Печать с конца" << endl;
			cin >> menu2;
			if (menu2 == '1')list(head);
			else if (menu2 == '2')list(tail);
			else printf("error");
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
			int k = 0;
			k = value__spis(head);
			cout << "Количество елементов списка = " << k << endl;
			
			cout << "Введите номер после которого хотите добавить структуру >";
			cin >> N;
			if (N == 0) {
				task4__nach(&head);
			}
			else if (N == k) {
				task4__kon(&head);
			}
			else {
				task4__ser(head, N);
			}

		}

		else if (menu == '5') {
			int M;
			cout << "Введите место участника, которого хотите удалить >";
			cin >> M;
 			task5(M);

		}


		else if (menu == '6') {
			task6(head);
		}
		
		else if (menu == '7') {
			task7(head);
		}

		else if (menu == '8') {
			task8();
		}

		else if (menu == '9') {
			free(head);
			free(tail);
			break;
		}





		system("pause");
		system("cls");

	}
}