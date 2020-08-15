#include "DOG_MASTER.h"

int main() {

	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name, FIO;
	int age, ID, dogs, a, koldogs, menu, kol = 0;
	double weight;
	MASTER mas[10];
	int temp, tempdog;

	while (true)
	{
		cout << endl << endl;
		cout << "1. Добавить участника клуба " << endl;
		cout << "2. Изменить данные о участнике клуба или его собаки" << endl;
		cout << "3. Посмотреть всех участиников клуба" << endl;
		cout << "4. Количество участников клуба" << endl;
		cout << "5. Выход " << endl;
		cout << ">";
		cin >> menu;
		switch (menu) {
		case 1:
			cout << endl << "Введите ФИО участника клуба > ";
			cin.ignore(32767, '\n');
			getline(cin, FIO);
			if (FIO == "") {
				mas[kol] = MASTER();
				kol++;
				break;
			}
			cout << "Введите кол-во собак > ";
			cin >> koldogs;
			mas[kol] = MASTER(FIO, koldogs);
			for (int i = 0; i < koldogs; i++) {
				cout << endl << "Введите кличку собаки > ";
				cin.ignore(32767, '\n');
				getline(cin, name);
				if (name == "") {
					mas[kol].A[kol] = DOG();
					break;
				}
				cout << "Введите вес собаки >";
				cin >> weight;
				cout << "Введите возраст собаки >";
				cin >> age;
				mas[kol].A[i] = DOG(name, weight, age);
			}
			kol++;
			break;


		case 2:
			cout << "1. Изменить информацию про участника клуба " << endl;
			cout << "2. Изменить информацию про собак" << endl;
			cout << ">";
			cin >> menu;
			if (menu == 1) {
				cout << endl << "Введите номер участника клуба >";
				cin >> temp;
				temp = temp - 1;
				if (temp <= -1 || temp + 1 > kol) {
					cout << endl << "под таким номером нет участника" << endl;
					break;
				}

				cout << endl << "Введите ФИО участника клуба > ";
				cin.ignore(32767, '\n');
				getline(cin, FIO);
				mas[temp].Set(FIO);

			}

			else if (menu == 2) {
				cout << endl << "Введите номер участника клуба у которого хотите изменить информацию про собаку >";
				cin >> temp;
				temp = temp - 1;
				if (temp <= -1 || temp > kol) {
					cout << endl << "под таким номером нет участника" << endl;
					break;
				}
				cout << endl << "Введите номер собаки про которую хотите изменить информацию >";
				cin >> tempdog;
				tempdog = tempdog - 1;
				mas[temp].Get(FIO, ID, dogs);
				if (tempdog <= -1 || tempdog + 1 > dogs) {
					cout << endl << "Под таким номером нет собаки" << endl;
					break;
				}

				cout << endl << "Введите кличку собаки > ";
				cin.ignore(32767, '\n');
				getline(cin, name);
				cout << "Введите вес собаки >";
				cin >> weight;
				cout << "Введите возраст собаки >";
				cin >> age;
				mas[temp].A[tempdog].Set(name, weight, age);


			}

			break;


		case 3:
			for (int j = 0; j < kol; j++) {
				mas[j].Get(FIO, ID, dogs);
				cout << endl << "ФИО > " << FIO << endl;
				cout << "ID клуба > " << ID << endl << endl;
				for (int i = 0; i < dogs; i++) {
					a = i;
					mas[j].A[i].Get(name, weight, age);
					cout << "Собака №" << a + 1 << endl;
					cout << "Кличка > " << name << endl;
					cout << "Вес >" << weight << endl;
					cout << "Возраст>" << age << endl;
					cout << endl << endl;
				}
			}
			break;
		case 4:
			cout << endl << "Количество участников клуба > " << mas[kol].count << endl;
			break;
		case 5:
			return 0;
		


		}
		
	}



}