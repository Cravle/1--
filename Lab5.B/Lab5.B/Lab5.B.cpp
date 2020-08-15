#include <iostream>

using namespace std;

int k;
int a;

int main() {
	setlocale(LC_ALL, "rus");
	for (;;) {
		cout << "Введите количство грибов:";
		cin >> k;
		if (k < 10) {
			if (k == 1)
				cout << "У меня " << k << " гриб" << endl;
			else if (k < 5)
				cout << "У меня " << k << " гриба" << endl;
			else if (k < 10)
				cout << "У меня " << k << " грибов" << endl;
		}

		else {
			a = k % (k - k % (k / 10 * 10));
			if (k < 20) {
				cout << "У меня " << k << " грибов" << endl;
			}
			else {
				if (a == 0)
					cout << "У меня " << k << " грибов" << endl;
				else if (a == 1)
					cout << "У меня " << k << " гриб" << endl;
				else if (a < 5)
					cout << "У меня " << k << " гриба" << endl;
				else if (a < 10)
					cout << "У меня " << k << " грибов" << endl;
			}
		}
		system("pause");
		system("cls");
	}
}


