#pragma once


#pragma once

#ifndef __MAIN__H
#define __MAIN__H

#include <stdio.h>
#include <locale.h>
#include <string>
#include <ctime>
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <malloc.h>


#include "struct.h"



using namespace std;

struct sport* create(void);
struct sport* file__create(void);
void list(sport* head);

void task3(sport* head);
void task31(sport* head);

void task4(sport* head, int N);
void task41(sport** head);

void task5(sport* head, int M);
void task51(sport** head);

void task6(struct sport* head);

void task7(sport* head);

struct sport* task8(void);

void swap(struct sport* a, struct sport* b);

void printe();

#endif // !__MAIN__H
