#include <iostream>
#include <string>

using namespace std;

class Poligraf
{
public:
	Poligraf();
	Poligraf(string descr);
	
	string getDescr();
private:
	string descr;
};

Poligraf::Poligraf(){}
Poligraf::Poligraf(string descr) {
	this->descr = descr;
}

string Poligraf::getDescr() {
	return descr;
}


class Newspaper : public Poligraf
{
public:
	Newspaper();
	Newspaper(string descr, int period, string adress);
	void showInfo();

private:
	int period;
	string adress;
};

Newspaper::Newspaper(){}
Newspaper::Newspaper(string descr, int period, string adress) : Poligraf(descr) {
	this->period = period;
	this->adress = adress;
}

void Newspaper::showInfo() {
	cout << "�������� �������� = " << Poligraf::getDescr() << endl << "������ " << Newspaper::period  << "� ������\n������: "  << Newspaper::adress;
}

class Book : public Poligraf
{
public:
	Book();
	Book(string descr, string author,string theme, string izd);
	
	void showInfo();
private:
	string author;
	string theme;
	string izd;
};

Book::Book(){}
Book::Book(string descr, string author, string theme, string izd): Poligraf(descr){
	this->author = author;
	this->theme = theme;
	this->izd = izd;
}

void Book::showInfo() {
	cout << "�������� �������� = " << Poligraf::getDescr() << endl << "����� " << author << "\n����: " << theme << "\n������������"<< izd;

}



int main()
{
	setlocale(LC_ALL, "rus");
	Newspaper ob1("��������1", 15, "������� 2");
	Book ob2("��������2","������", "������� �����", "�����" );
	ob1.showInfo();
	cout << "\n--------------------------------------" << endl;
	ob2.showInfo();
}
