#include <iostream>
#include<ctime>
#include<thread>
#include<iomanip>
#include <windows.h>
using namespace std;

void siftDown(int* numbers, int root, int bottom)
{
	int max; // индекс максимального потомка
	int done = 0; // флаг того, что куча сформирована
	// Пока не дошли до последнего ряда
	while ((root * 2 <= bottom) && (!done))
	{
		if (root * 2 == bottom)    // если мы в последнем ряду,
			max = root * 2;    // запоминаем левый потомок
			// иначе запоминаем больший потомок из двух
		else if (numbers[root * 2] > numbers[root * 2 + 1])
			max = root * 2;
		else
			max = root * 2 + 1;
		// если элемент вершины меньше максимального потомка
		if (numbers[root] < numbers[max])
		{
			int temp = numbers[root]; // меняем их местами
			numbers[root] = numbers[max];
			numbers[max] = temp;
			root = max;
		}
		else
			done = 1; // пирамида сформирована
	}
}
// Функция сортировки на куче
void heapSort(int* numbers, int array_size)
{
	// Формируем нижний ряд пирамиды
	for (int i = (array_size / 2) - 1; i >= 0; i--)
		siftDown(numbers, i, array_size - 1);
	// Просеиваем через пирамиду остальные элементы
	for (int i = array_size - 1; i >= 1; i--)
	{
		int temp = numbers[0];
		numbers[0] = numbers[i];
		numbers[i] = temp;
		siftDown(numbers, 0, i - 1);
	}
}

void reverse(int f[], int N) {
	for (int i = 0; i < N / 2; i++) {
		int k = f[i];
		f[i] = f[N - i - 1];
		f[N - i - 1] = k;
	}
}
int main()
{
	int N;
	
	setlocale(LC_ALL, "Rus");
	while (true) {
		srand(55);
		cout << "Турнирная сортировка\n";
		cout << "Введите количество елементов в маcсиве " << endl;
		cin >> N;
		cout << endl << endl;
		int* a;
		a = new int[N];
		int* b;
		b = new int[N];
		int* f;
		f = new int[N];
		float k = 0;
		float g = 0;
		float d = 0;
		
		for (int i = 0; i < N; i++) {
			b[i] = rand() % 50;
		}

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < N; j++) {
				a[j] = b[j];
			}
			auto start = chrono::high_resolution_clock::now();
			heapSort(a, N);
			auto end = chrono::high_resolution_clock::now();
			chrono::duration<float> duration = end - start;
			k += duration.count() / 100;
		}
		
		cout << endl << " Массив до сортировки" << endl;
		for (int i = 0; i < N; i++) {
			cout << b[i] << setw(4);
		}
		cout << endl;
		cout << "Неупорядоченый массив" << endl;

		for (int i = 0; i < N; i++) {
			//Вывод отсортированного массива
			cout << a[i] << setw(4);
		}cout << endl << "Время сортировки ";
		printf("%1.10f", k);
		cout << endl << endl;

		for (int i = 0; i < 100; i++) {
			auto before = chrono::high_resolution_clock::now();
			heapSort(a, N);
			auto after = chrono::high_resolution_clock::now();
			chrono::duration<float> duration = after - before;
			g += duration.count() / 100;
		}
		cout << " Массив до сортировки" << endl;
		for (int i = 0; i < N; i++) {
			cout << a[i] << setw(4);
		}
		cout << endl;
		cout << "Упорядоченый массив " << endl;
		for (int i = 0; i < N; i++) {
			cout << a[i] << setw(4);
		}
		cout << endl << "Время сортировки ";
		printf("%1.10f", g);
		cout << endl << endl;

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < N; j++) {
				f[j] = a[j];
			}
			reverse(f, N);
			auto bk = chrono::high_resolution_clock::now();
			heapSort(a, N);
			auto af = chrono::high_resolution_clock::now();
			chrono::duration<float> duration = af - bk;
			d += duration.count() / 100;
		}
		cout << " Массив до сортировки" << endl;
		for (int i = 0; i < N; i++) {
			cout << f[i] << setw(4);
		}
		cout << endl;
		cout << "Упорядоченый массив в обратном порядке" << endl;

			for (int i = 0; i < N; i++) {
				//Вывод отсортированного массива
				cout << a[i] << setw(4);
			}cout << endl << "Время сортировки ";
		printf("%1.10f", d);
		cout << endl;
		


		system("pause");
		system("cls");
	}
	return 0;
}