#pragma once

#ifndef _MAIN_H_

#define _MAIN_H_
#define __DEBUG__

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

void print_DM(int** Ar, int N);
void print_OM(int* Ar, int N);

void fill_DM(int** Ar, int N);
void fill_OM(int* Ar, int N);

void solve_DM(int** Ar, int N);
void solve_OM(int* Ar, int N);

#endif // !_MAIN_H_