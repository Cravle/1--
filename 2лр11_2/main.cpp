#include "sport.h"




int main()
{
    while (true) {
        setlocale(LC_ALL, "rus");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        string n;
        char c;
        float m;
        int p;

        sport obj[N];

        cout << "Работа функции SET!" << endl;

        for (int i = 0; i < N; i++)
        {
            cout << "Фамилия, код, баллы, место >";
            cin >> n;
            cin >> c;
            cin >> m;
            cin >> p;
            obj[i].set(n, c, m, p);

        }
        cout << "Работа функции GET и SHOW!" << endl;
        cout << "Фамилия, код, баллы, место" << endl;
        for (int i = 0; i < N; i++)
        {
            obj[i].get(n, c, m, p);
            obj[i].show();
            cout << endl;
        }

        system("pause");
        system("cls");

    }
}

