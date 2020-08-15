
#include"TIMER.h"

int main()
{
    setlocale(LC_ALL, "rus");
    TIMER a(54);
    a.show();

    TIMER b(4, 32);
    b.show();
    cout << "\n------------Копирование------------\n" << endl;
    TIMER c(a);
    c.show();

    TIMER d(b);
    d.show();
}

