#include "DOG_MASTER.h"

DOG::DOG() {
	name = "noname";
	weight = 0;
	age = 0;

}

DOG::DOG(string name, double weight, int age) {
	this->name = name;
	this->weight = weight;
	this->age = age;
}

void DOG::Set(string name, double weight, int age) {
	this->name = name;
	this->weight = weight;
	this->age = age;
}

void DOG::Get(string& name, double& weight, int& age) {
	name = this->name;
	weight = this->weight;
	age = this->age;

}




MASTER::MASTER() {
	FIO = "undefine";
	dogs = 0;
}

MASTER::MASTER(string FIO, int dogs) {
	this->FIO = FIO;
	this->dogs = dogs;
	count++;

}

void MASTER::Set(string FIO) {
	this->FIO = FIO;
}

void MASTER::Get(string& FIO, int& ID, int& dogs) {
	FIO = this->FIO;
	ID = this->ID;
	dogs = this->dogs;
}

int MASTER::Kolpeople() {
	return count;
}

MASTER& MASTER::operator=(const MASTER& other) {
	if (this != &other) {
		FIO = other.FIO;
		dogs = other.dogs;
	}
	return *this;
}

int MASTER::count = 0;