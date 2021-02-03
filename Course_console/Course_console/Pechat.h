#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pechat {
public:

	Pechat(string nazv, int pages) { nazv = nazv; pages = pages; };

	string getNazv();
	int getPages();
protected: 
	string nazv;
	int pages;
};

//-------------Книга-------------------------------------------------------------------
class Book : public Pechat {
protected:
	
	string author;
public:
	string getAuthor();
	Book(string author, string nazv, int pages): Pechat(nazv, pages)  { author = author; };

};

//-------------Книга childrens-----------------
class Fantasy : public Book {
public:
	Fantasy(string author, string nazv, int pages, string about ) : Book(author, nazv, pages) { about = about; };
	string getAbout();
protected:
	
	string about;
};

class Adventure : public Book {
	string about;
};

class Detective : public Book {
	string about;
};





//-------------Журнал------------------------------------------------------------------
class Magazine : public Pechat {
	string author;
};

//-------------Журнал childrens-----------------
class Computer : public Magazine {
	string about;
};

class Fashion : public Magazine {
	string about;
};

class Sport : public Magazine {
	string about;
};




//-------------Энциклопедия-------------------------------------------------------------------
class Encyclopedia : public Pechat {
	string authors;
};

//-------------Энциклопедия childrens-----------------
class Animals : public Encyclopedia {
	string about;
};

class Geography : public Encyclopedia {
	string about;
};

class Botany : public Encyclopedia {
	string about;
};