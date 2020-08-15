#pragma once


#pragma once

#ifndef __FUNC__H
#define __FUNC__H

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

//struct sport* head, * tail;


void create();
//struct sport* file__create(void);
void list(sport* p);
//
void task3(sport* head);
void task31(sport* head);
//
int value__spis(struct sport* p);
void task4__nach(struct sport** head_ref);
void task4__kon(struct sport** head_ref);
void task4__ser(sport* p, int N);

//
void task5(int M);
//
void task6(struct sport* head);
//
void task7(sport* head);

void task8();

void swap(struct sport* a, struct sport* b);



#endif // !__MAIN__H
