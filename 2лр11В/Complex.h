#pragma once

#ifndef __COMPLEX__H
#define __COMPLEX__H

#include <iostream>
using namespace std;

class Complex {
private:
	int r;
	int m;
public:
	void setRM(int real, int img);
	void add(int a, int b);
	void sum(int real, int img);
	void print();
};

#endif#
