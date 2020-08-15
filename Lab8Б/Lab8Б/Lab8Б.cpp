#include <iostream>
#include <iomanip>

int a;
int k;
int x;
int r;

using namespace std;

void FillArray( int* const  arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
		
	}
	cout << endl;
}

void randValue()
{
	
	r = 0;
	 r = (5 + rand() % 5);
}

void push_back(int*& arr, int& size) // заполнение второго массива
{
	size = size + k;
	int* newArray = new int[size + k];
	for (int i = 0; i < x; i++)// заполнение до индекса X
	{
		newArray[i] = arr[i];
	}
	for (int i = x + k; i < size + k ; i++)// заполнение после индекса + вставленной длинны ел.
	{
		newArray[i] = arr[i - k];
	}


	for (int i = x ; i <  x + k; i++) // заполнение вставленных эллементов
		{
		randValue();
		newArray[i] = r;
		}


	delete[] arr;// чтобы не создать утечки в памяти	

	arr = newArray;
}

void pop_back(int*& arr, int& size)
{
	size = size - k;
	int* newArray = new int[size];
		
	for (int i = 0; i < x; i++)// заполнение до индекса X
	{
		newArray[i] = arr[i];
	}
	for (int i = x; i < size; i++)// заполнение после индекса + вставленной длинны ел.
	{
		newArray[i] = arr[i + k];
	}

	delete[] arr;// чтобы не создать утечки в памяти

	arr = newArray;
}

int main(void)
{
	setlocale(LC_ALL, "rus");
	srand(55/*time(NULL)*/);
	int size;
	cout << "Введите размер массива:" << endl;
	cin >> size;
	int* arr = new int[size];

	FillArray(arr, size);
	for (;;) {
		cout << "Ваш начальный массив:" << endl;
		ShowArray(arr, size);

		cout << "Что вы хотите сделать? 1 - Вставить элементы. 2 - Удалить элменты. 3 - Выйти из программы." << endl;
		cin >> a;

		switch (a) {
		case 1:

			cout << "Выберите индекс" << endl;;
			cin >> x;
			cout << "Сколько элементов хотите вставить?" << endl;
			cin >> k;

			push_back(arr, size);

			cout << "Ваш измененный массив:" << endl;
			ShowArray(arr, size);
			break;

		case 2:
			cout << "Выберите индекс" << endl;;
			cin >> x;
			cout << "Сколько Элементов хотите удалить?" << endl;
			cin >> k;

			pop_back(arr, size);

			cout << "Ваш измененный массив:" << endl;
			ShowArray(arr, size);
			break;
		case 3:
			exit(0);
		}

		system("pause");
		system("cls");

		
	}
}
