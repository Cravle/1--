#pragma once
#ifndef __POINT__H
#define __POINT__H

#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int a, int b);
	Point(Point& other);
	void SetXY(int a, int b);
	void find(int& sum, int& proizv);
	void print();
};

#endif