#pragma once

#ifndef __SPORT__H
#define __SPORT__H

#include <iostream>
#include <string>

#define _CRT_SECURE_NO_WARNINGS
#define N 3

using namespace std;


class sport {
private:
	string name; //�������
	char cod;  //�������
	float mark; //������
	int place;  // �����

public:
	void set(string n, char c, float m, int p);
	void get(string n, char& c, float& m, int& p);
	void show(void);
};





#endif // !__MAIN_H
