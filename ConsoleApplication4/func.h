#pragma once
#ifndef _FUNC_H
#define _FUNC_H

#include <iostream>
#include <string>
#include <list>
#include <stack>
#include <conio.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int tiles[28][2] = {
            {0,1},{0,2},{0,3},{0,4},{0,5},{0,6},
            {1,2},{1,3},{1,4},{1,5},{1,6},
            {2,3},{2,4},{2,5},{2,6},
            {3,4},{3,5},{3,6},
            {4,5},{4,6},
            {5,6},
            {0,0},{1,1},{2,2}, {3,3}, {4,4},{5,5},{6,6}
};

#endif // !_FUNC_H



//void ShowArray(int**, int size1, int size2);