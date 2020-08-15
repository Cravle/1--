#include "Header.h"
#include "struct.h"



void write(sport mm[], int* n) {
#ifdef DEBUG
	cout << "* НАЧАЛО ФУНКЦИИ *" << endl;
	cout << __DATE__ << __TIME__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
#endif // DEBUG

	
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ". Введите: фамилию участника, код команды, количестов, место в итоге >";
		cin >> mm[i].name;
		if (!strcmp(mm[i].name.c_str(), "***")) {
			*n = i;
			break;
		}
		cin >> mm[i].cod;
		cin >> mm[i].mark;
		cin >> mm[i].place;

	}

#ifdef DEBUG
	cout << __DATE__ << __TIME__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << "*КОНЕЦ ФУНКЦИИ*" << endl;
#endif // DEBUG



}

void random(sport mm[], int* n) {
#ifdef DEBUG
	cout << "* НАЧАЛО ФУНКЦИИ *" << endl;
	cout << __DATE__ << __TIME__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
#endif // DEBUG
	srand(time(NULL));
	int r; // количество строк
	int codx;// Рабочая переменная
	r = rand() % 9 + 1;
	*n = r;
	for (int i = 0; i < r; i++)
	{
		// Создание уникльного имени
		bool no_unique = true;
		do {
			mm[i].name = "StName" + to_string(rand() % 10 + 1);
			for (int j = 0; j < r; j++)
			{
				if (i != j && mm[i].name == mm[j].name)
				{
					no_unique = true;
					break;
				}
				else no_unique = false;
			}
		} while (no_unique);

		// Создание оценок и среднего балла
		mm[i].cod = char(rand() % 26 + 0x61);
		mm[i].mark = (rand() % 6666 + 50) / 10.0;// создания оценки

		bool no_unique2 = true;
		do {
			mm[i].place = char(rand() % r + 1);
			for (int j = 0; j < r; j++)
			{
				if (i != j && mm[i].place == mm[j].place)
				{
					no_unique2 = true;
					break;
				}
				else no_unique2 = false;
			}
		} while (no_unique2);
	}
	cout << "Сгенерировалось " << *n << " строк" << endl;
#ifdef DEBUG
	cout << __DATE__ << __TIME__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << "*КОНЕЦ ФУНКЦИИ*" << endl;
#endif // DEBUG
}

void sort(sport mm[], int* n)
{
	
#ifdef DEBUG
	cout << "* НАЧАЛО ФУНКЦИИ *" << endl;
	cout << __DATE__ << __TIME__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
#endif // DEBUG
	sport t;
	for (int i = 0; i < *n; i++) {
		for (int j = 0; j < *n; j++) {
			if (mm[i].mark > mm[j].mark) {
				t = mm[i];
				mm[i] = mm[j];
				mm[j] = t;
			}
		}
	}

	for (int i = 0; i < *n; i++)
	{
		mm[i].place = i + 1;
	}
#ifdef DEBUG
	cout << __DATE__ << __TIME__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << "*КОНЕЦ ФУНКЦИИ*" << endl;
#endif // DEBUG

}

void print(sport mm[], int* n) {
#ifdef DEBUG
	cout << "* НАЧАЛО ФУНКЦИИ *" << endl;
	cout << __DATE__ << __TIME__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
#endif // DEBUG
	printf("|-----------------------------------------------------------|\n");
	printf("|               Ведомость спортивных сотязаний              |\n");
	printf("|-----------------------------------------------------------|\n");
	printf("| Фамилия участника | Код команды | Количество|Места в итоге|\n");
	printf("|                   |             |    баллов |             |\n");
	printf("|-------------------|-------------|-----------|-------------|\n");
	for (int i = 0; i < *n; i++)
		printf("|%-9s          |%-c            |%-11.1f|%-13d|\n", mm[i].name.c_str(), mm[i].cod, mm[i].mark, mm[i].place);
	printf("-------------------------------------------------------------\n");

#ifdef DEBUG
	cout << __DATE__ << __TIME__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << "*КОНЕЦ ФУНКЦИИ*" << endl;
#endif // DEBUG
}