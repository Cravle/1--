#pragma once
#ifndef __STRUCT_H__
#define __SRUTCT_H__


#include <iostream>

using namespace std;

struct sport {
	char name[30]; /* название */
	char cod[2];
	float mark;
	int place;

	struct sport* v1;
	struct sport* v2;
};




#endif // !__STRUCT_H__