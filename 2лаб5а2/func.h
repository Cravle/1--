#pragma once


#ifndef __FUNC__H
#define __FUNC__H

#include <iostream>
#include <iomanip>
#include <ctime>


void print__dm(int** Ar, int  N, int M);
void fill__ar(int** Ar, int  N, int M);
void foo(int** Ar, int N, int M, int* min, int* max);//подсчет min max
void print__om(int* Ar, int N);

int gd(int** Ar, int N, int M);
int pd(int** Ar, int N, int M);

int* boo(int** Ar, int N, int M, int* min, int* max, int* sumgd, int* proizpd);

#endif // !__MAIN__H