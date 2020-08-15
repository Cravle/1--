#include <iostream>
#include <ctime>

using namespace std;

int a;
int N;
int t;

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	for (;;) {
		N = rand() % 101;
		cout << "Давай сыграем в игру, я загадаю число от 0 до 100, ты попробуешь угадать" << endl;
		for (;;) {

			cout << "Введите число: ";

			cin >> a;
			if (a > N) {
				cout << "Попробуй взять меньше" << endl;
				t++;
			}
			else if (a < N) {
				cout << "Попробуй взять больше" << endl;
				t++;
			}
			else if (a == N) {
				t++;
				cout << "Поздравляю, ты угадал число: " << N << endl;
				cout << "Тебе понадобилось " << t << " попыток" << endl;
				break;
			}
		}
		system("pause");
		system("cls");
	}
}