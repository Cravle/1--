#include "Pechat.h"

int main()
{
    setlocale(LC_ALL, "rus");
    Fantasy ob1("������", "������� �����", 45, "� ������� �����");
    cout << "����� " << ob1.getAuthor() << endl;
    cout << "�������� " << ob1.getNazv() << endl;
    cout << "���-�� ��� " << ob1.getPages() << endl;
    cout << "� ���: " << ob1.getAbout() << endl;
}


