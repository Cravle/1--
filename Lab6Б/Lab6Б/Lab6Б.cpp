#include <iostream>
#include <ctime>

#define N 10

using namespace std;

int a;
int b;
int c;
char mark;
double t = 0;
int k;


int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Сейчас проверим на сколько ты знаешь таблицу умножения"<< endl;
	srand(time(NULL));
		for (int i = 0; i < N; i++) {
			switch (i) {
			case 0:
				a = rand() % 10 + 1;
				b = rand() % 10 + 1;
				break;
			case 1:
				a = rand() % 10 + 1;
				b = rand() % 10 + 1;
				break;
			case 2:
				a = rand() % 10 + 1;
				b = rand() % 10 + 1;
				break;
			case 3:
				a = rand() % 10 + 1;
				b = rand() % 10 + 1;
				break;
			case 4:
				a = rand() % 10 + 1;
				b = rand() % 10 + 1;
				break;
			case 5:
				a = rand() % 10 + 1;
				b = rand() % 10 + 1;
				break;
			case 6:
				a = rand() % 10 + 1;
				b = rand() % 10 + 1;
				break;
			case 7:
				a = rand() % 10 + 1;
				b = rand() % 10 + 1;
				break;
			case 8:
				a = rand() % 10 + 1;
				b = rand() % 10 + 1;
				break;
			case 9:
				a = rand() % 10 + 1;
				b = rand() % 10 + 1;
				break;
			default:
				a = rand() % 10 + 1;
				b = rand() % 10 + 1;
				break;
			}
			cout << i + 1 << ". Сколько будет " << a << " * " << b << "?" << endl;
			cout << "Введите ответ: ";
			cin >> c;
			if (c == a * b) {
				t++;
			}

		}
		cout << "Правильных ответов " << t << " из " << N << endl;
		k = ((t / N) * 100);
		if (k > 90)
			mark = 'A';
		else if (k < 90 && k >= 82)
			mark = 'B';
		else if (k < 82 && k >= 75)
			mark = 'C';
		else if (k < 75 && k >= 60)
			mark = 'E';
		else if (k < 60 && k >= 35)
			mark = 'Fx';
		else mark = 'F';
		cout << "Ваша оценка: " << mark;

}
