#include "func.h"
#include "struct.h"

struct sport*  create(void) {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	struct sport* head = NULL;
	sport* p = NULL, * pred = NULL;

	int k;

	head = pred = p = (sport*)malloc(sizeof(sport)); //выделяем память для первой записи

	printf("Введите: фамилию участника >");
	scanf("%s", p->name);
	printf("Введите: код команды >");
	scanf(" %s", p->cod);
	printf("Введите: количество баллов >");
	scanf("%f", &p->mark);
	printf("Введите:место в итоге >");
	scanf("%d", &p->place);
	printf("Продолжить ввод?\n  ");
	cin >> k;
	if (k != 0) {
		do {
			p = (sport*)malloc(sizeof(sport));

			printf("Введите: фамилию участника >");
			scanf("%s", p->name);
			printf("Введите: код команды >");
			scanf(" %c", &p->cod);
			printf("Введите: количество баллов >");
			scanf("%f", &p->mark);
			printf("Введите:место в итоге >");
			scanf("%d", &p->place);

			pred->next = p;
			pred = p;
			printf("Продолжить ввод?\n  ");
			cin >> k;
		} while (k != 0);
		p->next = NULL;
	}
	else if (k == 0) {
		pred->next = p;
		pred = p;
		p->next = NULL;
	}

	return head;

}

struct sport* file__create(void) {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	struct sport* head = NULL;
	sport* p = NULL, * pred = NULL;

	FILE* f;

	char k;

	head = pred = p = (sport*)malloc(sizeof(sport)); //выделяем память для первой записи

	printf("Введите: фамилию участника >");
	scanf("%s", p->name);
	printf("Введите: код команды >");
	scanf(" %c", &p->cod);
	printf("Введите: количество баллов >");
	scanf("%f", &p->mark);
	printf("Введите:место в итоге >");
	scanf("%d", &p->place);
	printf("Продолжить ввод?\n  ");
	k = _getch();
	if (k != '0') {
		while( k != '0') {
			k = 0;
			p = (sport*)malloc(sizeof(sport));

			printf("Введите: фамилию участника >");
			scanf("%s", p->name);
			printf("Введите: код команды >");
			scanf(" %c", &p->cod);
			printf("Введите: количество баллов >");
			scanf("%f", &p->mark);
			printf("Введите:место в итоге >");
			scanf("%d", &p->place);

			pred->next = p;
			pred = p;
			printf("Продолжить ввод?\n  ");
			k = _getch();
		}
		p->next = NULL;
	}
	else if (k == 0) {
		pred->next = p;
		pred = p;
		p->next = NULL;
	}

	return head;

}

void task3(sport* head) {
	sport* Current = head, * Previous = Current;
	char* command = new char[2];
	cout << "Введите фамилию участникиа >";
	cin >> command;
	while (Current) {
		if (strncmp(command, Current->name, 30) == 0) {
			printf("|-----------------------------------------------------------|\n");
			printf("|%-19s|%-13s|%-11.1f|%-13d|\n", Current->name, Current->cod, Current->mark, Current->place);
			printf("|-----------------------------------------------------------|\n");
			break;
		}
		else
		{
			Previous = Current;
			Current = Current->next;
		}
		if (Current == NULL) {
			cout << "Такой фамилии не существует" << endl;
			break;
		}
	}
}

void task31(sport* head) {
	sport* Current = head, * Previous = Current;
	int i = 1;
	char numb[2];
	cout << "Введите код участника, которых хотите вывести >";
	cin >> numb;
	while (Current) {

		if (strncmp(numb, Current->cod, 2) == 0) {
			printf("|-----------------------------------------------------------|\n");
			printf("|%-19s|%-13s|%-11.1f|%-13d|\n", Current->name, Current->cod, Current->mark, Current->place);
			printf("|-----------------------------------------------------------|\n");
			Previous = Current;
			Current = Current->next;
			if (Current == NULL)
			{
				break;
			}
		}
		else
		{
			i++;
			Previous = Current;
			Current = Current->next;
		}
		if (Current == NULL) {
			cout << "Такого кода не существует" << endl;
			break;
		}
	}
}

void list(sport* head) {
	sport* p;
	p = head;
	setlocale(LC_ALL, "ru");
	printf( "|-----------------------------------------------------------|\n");
	printf( "|               Ведомость спортивных сотязаний              |\n");
	printf( "|-----------------------------------------------------------|\n");
	printf( "| Фамилия участника | Код команды | Количество|Места в итоге|\n");
	printf( "|                   |             |    баллов |             |\n");
	printf( "|-------------------|-------------|-----------|-------------|\n");
	while (p != 0)
	{
		printf("|%-19s|%-13s|%-11.1f|%-13d|\n", p->name, p->cod, p->mark, p->place);
		p = p->next;
	}
}

void task4(sport* head, int N) {
	sport* Current = head, * Previous = Current;

	int i = 1;
	while (Current) {

		if (i == N) {
			Previous = Current;
			Current = (struct sport*)malloc(sizeof(struct sport));
			Current->next = Previous->next;
			Previous->next = Current;
			printf("Введите: фамилию участника >");
			scanf("%s", Current->name);
			printf("Введите: код команды >");
			scanf(" %s", &Current->cod);
			printf("Введите: количество баллов >");
			scanf("%f", &Current->mark);
			printf("Введите:место в итоге >");
			scanf("%d", &Current->place);
			break;
		}
		else
		{
			i++;
			Previous = Current;
			Current = Current->next;
		}
	}
}
		
void task41(sport** head) {


	sport* Current = (struct sport*)malloc(sizeof(struct sport));
	printf("Введите: фамилию участника >");
	scanf("%s", Current->name);
	printf("Введите: код команды >");
	scanf(" %s", &Current->cod);
	printf("Введите: количество баллов >");
	scanf("%f", &Current->mark);
	printf("Введите:место в итоге >");
	scanf("%d", &Current->place);
	Current->next = *head;
	*head = Current;
}	

void task5(sport* head, int M) {
	sport* Current = head, * Previous = Current;
	int i = 1;
	while (Current) {
		if (i == M) {
			Previous->next = Current->next;
			free(Current);
			break;

		}
		else
		{
			i++;
			Previous = Current;
			Current = Current->next;
		}
		if (Current == NULL) {
			cout << "Невозможно удалить данный элемент" << endl;
			break;
		}
	}
}

void task51(sport** head) {
	sport* Current = *head;
	*head = Current->next;
	free(Current);
}

void task6(struct sport* head) {
	int swapped;
	struct sport* ptr1;
	struct sport* lptr = NULL;
	if (head == NULL) {
		return;
	}
	do
	{
		swapped = 0;
		ptr1 = head;
		while (ptr1->next != lptr) {
			if (ptr1->mark < ptr1->next->mark) {
				swap(ptr1, ptr1->next);
				swapped = 1;
			}
			ptr1 = ptr1->next;
		}
		lptr = ptr1;
	} while (swapped);

}

void swap(struct sport* a, struct sport* b) {

	struct sport t;
	struct sport* a_next, * b_next;
	a_next = a->next;
	b_next = b->next;
	t = *a;
	*a = *b;
	*b = t;
	a->next = a_next;
	b->next = b_next;

}

void task7(sport* head) {
	FILE* f;
	sport* p = head;
	fopen_s(&f, "sport.txt", "w");
		fprintf(f, "|-----------------------------------------------------------|\n");
		fprintf(f, "|               Ведомость спортивных сотязаний              |\n");
		fprintf(f, "|-----------------------------------------------------------|\n");
		fprintf(f, "| Фамилия участника | Код команды | Количество|Места в итоге|\n");
		fprintf(f, "|                   |             |    баллов |             |\n");
		fprintf(f, "|-------------------|-------------|-----------|-------------|\n");
	while (p != NULL) {
		fprintf(f, "|%-19s|%-13s|%-11.1f|%-13d|\n", p->name, p->cod, p->mark, p->place);
		fprintf(f, "|-----------------------------------------------------------|\n");

		p = p->next;
	}
	fclose(f);
}

struct sport* task8(void) {
	setlocale(LC_ALL, "ru");

	FILE* f;
	struct sport temp;
	struct sport* Begin = NULL, * Previous = NULL, * Current = NULL;
	fopen_s(&f, "temp.txt", "r");
	while (fscanf(f, "%s%s%f%d", temp.name, temp.cod, &temp.mark, &temp.place) != EOF) {
		Current = (struct sport*)malloc(sizeof(struct sport));
		if (Begin == NULL) {
			Begin = Current;
		}
		else {
			Previous->next = Current;
		}
		Previous = Current;
		strcpy(Current->name, temp.name);
		strcpy(Current->cod, temp.cod);
		Current->mark = temp.mark;
		Current->place = temp.place;
		Previous->next = NULL;
	}
	fclose(f);
	return Begin;
}






