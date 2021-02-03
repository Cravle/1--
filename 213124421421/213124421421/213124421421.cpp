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
	cout << "Описание полиграф = " << Poligraf::getDescr() << endl << "период " << Newspaper::period  << "в неделю\nадресс: "  << Newspaper::adress;
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
	cout << "Описание полиграф = " << Poligraf::getDescr() << endl << "автор " << author << "\nтема: " << theme << "\nиздательство"<< izd;

}



int main()
{
	setlocale(LC_ALL, "rus");
	Newspaper ob1("Полиграф1", 15, "Сумская 2");
	Book ob2("Полиграф2","Пушкин", "Золотая рыбка", "Ранок" );
	ob1.showInfo();
	cout << "\n--------------------------------------" << endl;
	ob2.showInfo();
}
