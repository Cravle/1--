#include "main.h"
#include "struct.h"


void write(sport mm[], int* n) {
	FILE* f;
	fopen_s(&f, "sport.txt", "w");

	fprintf(f, "|-----------------------------------------------------------|\n");
	fprintf(f, "|               Ведомость спортивных сотязаний              |\n");
	fprintf(f, "|-----------------------------------------------------------|\n");
	fprintf(f, "| Фамилия участника | Код команды | Количество|Места в итоге|\n");
	fprintf(f, "|                   |             |    баллов |             |\n");
	fprintf(f, "|-------------------|-------------|-----------|-------------|\n");
	

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
	for (int i = 0; i < *n; i++)
		fprintf(f, "|%-9s          |%-c            |%-11.1f|%-13d|\n", mm[i].name.c_str(), mm[i].cod, mm[i].mark, mm[i].place);
	fprintf(f, "-------------------------------------------------------------\n");
	fclose(f);
}

void random(sport mm[], int* n) {
	FILE* f;
	fopen_s(&f, "sport.txt", "w");

	fprintf(f, "|-----------------------------------------------------------|\n");
	fprintf(f, "|               Ведомость спортивных сотязаний              |\n");
	fprintf(f, "|-----------------------------------------------------------|\n");
	fprintf(f, "| Фамилия участника | Код команды | Количество|Места в итоге|\n");
	fprintf(f, "|                   |             |    баллов |             |\n");
	fprintf(f, "|-------------------|-------------|-----------|-------------|\n");

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
	for (int i = 0; i < *n; i++)
		fprintf(f, "|%-9s          |%-c            |%-11.1f|%-13d|\n", mm[i].name.c_str(), mm[i].cod, mm[i].mark, mm[i].place);
	fprintf(f, "-------------------------------------------------------------\n");
	fclose(f);
}

void sort(sport mm[], int* n)
{
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

}

void add__first() {
	FILE* f; 
	FILE* t;

	char* S1 = new char[128];

	printf("Введите строку >> ");
	cin >> S1;

	fopen_s(&t, "temp.txt", "w");

	fwrite(S1, strlen(S1), 1, t);

	fclose(t);
	
	fopen_s(&f, "sport.txt", "r");
	fopen_s(&t, "temp.txt", "ab");
	fprintf(t, "\n");
	while (fgets(S1, 255, f) != NULL) // Чтение из data3.txt
	{

		fputs(S1, t); // Запись в файл data33.txt
	}


	fclose(f);
	fclose(t);
	remove("sport.txt");
	rename("temp.txt", "sport.txt");
	delete[] S1;
}

void print__one()
{
	FILE* f;
	char* s = new char[255];
	int t = 0;
	cout << "Введите пожалуйста строку, которую желаете вывести >" << endl;
	cin >> t;

	fopen_s(&f, "sport.txt", "r");
	for (int i = 0; i < t; i++)fgets(s, 255, f);
	cout << s;

	delete[] s;
}

void print__all()
{
	FILE* f;
	char* s = new char[255];

	fopen_s(&f, "sport.txt", "r");
	while (fgets(s, 255, f) != NULL)
	{
		cout << s;
	}
	delete[] s;
}