#include "func.h"
#include "struct.h"
extern struct sport* tail, * head;
void create() {

	sport* p, * pred;
	pred = NULL;
	int k;
{
		do {
			p = (sport*)malloc(sizeof(sport));
			printf("�������: ������� ��������� >");
			scanf("%s", p->name);
			printf("�������: ��� ������� >");
			scanf(" %s", p->cod);
			printf("�������: ���������� ������ >");
			scanf("%f", &p->mark);
			printf("�������: ����� � ����� >");
			scanf("%d", &p->place);
			p->v1 = pred;
			if (pred != NULL) pred->v2 = p;
			else head = p;
			pred = p;

			printf("���������� ����?\n  ");
			cin >> k;
		} while (k != 0);
		tail = p;
		tail->v2 = NULL;
	}
	



}

void list(sport* p) {

	setlocale(LC_ALL, "ru");
	printf("|-----------------------------------------------------------|\n");
	printf("|               ��������� ���������� ���������              |\n");
	printf("|-----------------------------------------------------------|\n");
	printf("| ������� ��������� | ��� ������� | ����������|����� � �����|\n");
	printf("|                   |             |    ������ |             |\n");
	printf("|-------------------|-------------|-----------|-------------|\n");
	if (p == head)
	{
		while (p != NULL)
		{
			printf("|%-19s|%-13s|%-11.1f|%-13d|\n", p->name, p->cod, p->mark, p->place);
			p = p->v2;
		}
	}
	else if (p == tail)
	{
		while (p != NULL)
		{
			printf("|%-19s|%-13s|%-11.1f|%-13d|\n", p->name, p->cod, p->mark, p->place);
			p = p->v1;
		}

	}
	else
		printf("error");
}
//struct sport* file__create(void) {
//	setlocale(LC_ALL, "rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	struct sport* head = NULL;
//	sport* p = NULL, * pred = NULL;
//
//	FILE* f;
//
//	char k;
//
//	head = pred = p = (sport*)malloc(sizeof(sport)); //�������� ������ ��� ������ ������
//
//	printf("�������: ������� ��������� >");
//	scanf("%s", p->name);
//	printf("�������: ��� ������� >");
//	scanf(" %c", &p->cod);
//	printf("�������: ���������� ������ >");
//	scanf("%f", &p->mark);
//	printf("�������:����� � ����� >");
//	scanf("%d", &p->place);
//	printf("���������� ����?\n  ");
//	k = _getch();
//	if (k != '0') {
//		while (k != '0') {
//			k = 0;
//			p = (sport*)malloc(sizeof(sport));
//
//			printf("�������: ������� ��������� >");
//			scanf("%s", p->name);
//			printf("�������: ��� ������� >");
//			scanf(" %c", &p->cod);
//			printf("�������: ���������� ������ >");
//			scanf("%f", &p->mark);
//			printf("�������:����� � ����� >");
//			scanf("%d", &p->place);
//
//			pred->next = p;
//			pred = p;
//			printf("���������� ����?\n  ");
//			k = _getch();
//		}
//		p->next = NULL;
//	}
//	else if (k == 0) {
//		pred->next = p;
//		pred = p;
//		p->next = NULL;
//	}
//
//	return head;
//
//}

void task3(sport* p) {
	
	char* command = new char[2];
	int a;
	cout << "������� ������� ���������� >";
	cin >> command;
	cout << "1 - � ������ 2 - � �����" << endl;
	cin >> a;
	while (p) {
		if (strncmp(command, p->name, 30) == 0) {
			printf("|-----------------------------------------------------------|\n");
			printf("|%-19s|%-13s|%-11.1f|%-13d|\n", p->name, p->cod, p->mark, p->place);
			printf("|-----------------------------------------------------------|\n");
			break;
		}
		else
		{
			if (a == 1)p = p->v1;
			else if (a == 2) p = p->v2;
			else printf("error");
		}
		if (p == NULL) {
			cout << "����� ������� �� ����������" << endl;
			break;
		}
	}
}

void task31(sport* p) {
	int i = 1;
	char numb[2];
	int a;
	cout << "������� ��� ���������, ������� ������ ������� >" <<endl;
	cin >> numb;
	cout << "1 - � ������ 2 - � �����"<< endl;
	cin >> a;
	while (p) {

		if (strncmp(numb, p->cod, 2) == 0) {
			printf("|-----------------------------------------------------------|\n");
			printf("|%-19s|%-13s|%-11.1f|%-13d|\n", p->name, p->cod, p->mark, p->place);
			printf("|-----------------------------------------------------------|\n");
			if (a == 1)p = p->v1;
			else p = p->v2;
			if (p == NULL)
			{
				break;
			}
		}
		else
		{
			i++;
			if (a == 1)p = p->v1;
			else p = p->v2;
		}
		if (p == NULL) {
			cout << "������ ��� ���������� � ����� �����" << endl;
			break;
		}
	}
}
//
//
//

int value__spis(sport* p) {
	int i = 0;
	while (p) {
		i++;
		p = p->v2;
	}
	return i;
}

void task4__nach(struct sport** head_ref) {

	struct sport* new_node = (struct sport*)malloc(sizeof(struct sport));

	printf("�������: ������� ��������� >");
	scanf("%s", new_node->name);
	printf("�������: ��� ������� >");
	scanf(" %s", new_node->cod);
	printf("�������: ���������� ������ >");
	scanf("%f", &new_node->mark);
	printf("�������: ����� � ����� >");
	scanf("%d", &new_node->place);
	new_node->v2 = (*head_ref);
	new_node->v1 = NULL;

	if ((*head_ref) != NULL) {
		(*head_ref)->v1 = new_node;

	}
	(*head_ref) = new_node;
}

void task4__kon(struct sport** head_ref) {
	struct sport* new_node = (struct sport*)malloc(sizeof(struct sport));
	struct sport* last = *head_ref;
	printf("�������: ������� ��������� >");
	scanf("%s", new_node->name);
	printf("�������: ��� ������� >");
	scanf(" %s", new_node->cod);
	printf("�������: ���������� ������ >");
	scanf("%f", &new_node->mark);
	printf("�������: ����� � ����� >");
	scanf("%d", &new_node->place);
	new_node->v2 = NULL;
	if (*head_ref == NULL) {
		new_node->v1 = NULL;
		*head_ref = new_node;
		return;
	}
	while (last->v2 != NULL) {
		last = last->v2;
	}
	last->v2 = new_node;
	new_node->v1 = last;
	
}

void task4__ser(sport* p, int N) {
	int i = 1;
	p = head;

	while (p != NULL) {
		if (i == N) {
			
			sport* inserted = (sport*)malloc(sizeof(sport));
			printf("�������: ������� ��������� >");
			scanf("%s", inserted->name);
			printf("�������: ��� ������� >");
			scanf(" %s", inserted->cod);
			printf("�������: ���������� ������ >");
			scanf("%f", &inserted->mark);
			printf("�������: ����� � ����� >");
			scanf("%d", &inserted->place);
			inserted->v2 = p->v2;
			inserted->v1 = p;
			p->v2->v1 = inserted;
			p->v2 = inserted;
			break;
		}
		else {
			i++;
			p = p->v2;
		}
	}
}



void task5(int M)
{
	sport* p, * temp; 
	
	p = head;
	while (p != NULL)
	{
		if (p-> place == M) // ���� ������� �������� �������
		{
			if (p == head) // ���� ��������� ������ - ������
			{
				head = p->v2;
				head->v1 = NULL;
				free(p);
				p = head;
			}
			else if (p == tail) // ���� ��������� ������ - ���������
			{
				tail = p->v1;
				tail->v2 = NULL;
				free(p);
				p = tail;
			}
			else  // �������� �� ������� ������
			{
				p->v2->v1 = p->v1;
				p->v1->v2 = p->v2;
				temp = p;
				p = p->v2;
				free(temp);
			}
		}
		else // ���� �������� ������� �� ������� � ������������ �� ������
			p = p->v2;
	}
}


//
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
		while (ptr1->v2 != lptr) {
			if (ptr1->place > ptr1->v2->place) {
				swap(ptr1, ptr1->v2);
				swapped = 1;
			}
			ptr1 = ptr1->v2;
		}
		//lptr = ptr1;
	} while (swapped);

}

void swap(struct sport* a, struct sport* b) {

	struct sport t;
	struct sport* a_next, * b_next, *a_pred, *b_pred;
	a_next = a->v2;
	a_pred = a->v1;
	b_next = b->v2;
	b_pred = b->v2;
	t = *a;
	*a = *b;
	*b = t;
	a->v2 = a_next;
	a->v1 = a_pred;
	b->v2 = b_next;
	b->v1 = b_pred;
}

void task7(sport* head) {
	FILE* f;
	sport* p = head;
	fopen_s(&f, "sport.txt", "w");
	fprintf(f, "|-----------------------------------------------------------|\n");
	fprintf(f, "|               ��������� ���������� ���������              |\n");
	fprintf(f, "|-----------------------------------------------------------|\n");
	fprintf(f, "| ������� ��������� | ��� ������� | ����������|����� � �����|\n");
	fprintf(f, "|                   |             |    ������ |             |\n");
	fprintf(f, "|-------------------|-------------|-----------|-------------|\n");
	while (p != NULL) {
		fprintf(f, "|%-19s|%-13s|%-11.1f|%-13d|\n", p->name, p->cod, p->mark, p->place);
		fprintf(f, "|-----------------------------------------------------------|\n");

		p = p->v2;
	}
	fclose(f);
}

void task8(void) {
	setlocale(LC_ALL, "ru");

	FILE* f;
	struct sport temp;
	sport* p, *pred = NULL;
	fopen_s(&f, "temp.txt", "r");
	while (fscanf(f, "%s%s%f%d", temp.name, temp.cod, &temp.mark, &temp.place) != EOF) {
		p = (sport*)malloc(sizeof(sport));
		
		strcpy(p->name, temp.name);
		strcpy(p->cod, temp.cod);
		p->mark = temp.mark;
		p->place = temp.place;
		p->v1 = pred;
		if (pred != NULL) {
			pred->v2 = p;
		}
		else {
			head = p;
		}
		pred = p;
		tail = p;
		tail->v2 = NULL;
	}
	fclose(f);
	
}






