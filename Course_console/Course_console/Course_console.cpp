#include "Pechat.h"

int main()
{
    setlocale(LC_ALL, "rus");
    Fantasy ob1("Пушкин", "Золотая рыбка", 45, "О золотой рыбке");
    cout << "Автор " << ob1.getAuthor() << endl;
    cout << "Название " << ob1.getNazv() << endl;
    cout << "Кол-во стр " << ob1.getPages() << endl;
    cout << "О чем: " << ob1.getAbout() << endl;
}


