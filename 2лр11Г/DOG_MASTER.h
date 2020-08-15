#pragma once

#ifndef _DOG_MASTER_H_
#define _DOG_MASTER_H_

#include <iostream>
#include<string>
#include <conio.h>
#include<Windows.h>
using namespace std;

class DOG {
private:
	string name;
	double weight;
	int age;
public:
	DOG();
	DOG(string name, double weight, int age);
	void Set(string name, double weight, int age);
	void Get(string& name, double& weight, int& age);
};


class MASTER {
private:
	string FIO;
	const int ID = 7777;
	int dogs;
public:
	static int count;
	DOG A[10];
	MASTER();
	MASTER(string FIO, int dogs);
	void Set(string FIO);
	void Get(string& FIO, int& ID, int& dogs);
	int Kolpeople();
	MASTER& operator=(const MASTER& other);

};

#endif


