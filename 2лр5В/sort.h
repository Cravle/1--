#pragma once

#ifndef __SORT__H
#define __SORT__H

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;


int Sort(int* A, int N, int(*p)(int*, int));
int bubbleSort(int* A, int N);
int vstavkaSort(int* A, int N);

#endif // !__SORT__H

