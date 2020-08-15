#include "main.h"


using namespace std;


int index(char* ST1, char* ST2, int* t)
{
	int i, k = 0;
	int m1, m2;
	m1 = strlen(ST1);
	m2 = strlen(ST2);
	if (m2 > m1 || m1 == 0 || m2 == 0)
		return 1; // не правильно заданы строки
	i = m1 - m2;

	for (int j = 0; j < m1; j++)
	{
		if (ST1[j] == ST2[0])
			break;
		k++;
	}

	for (int j = 0; j < m2; j++)
	{
		if (ST1[k + j] != ST2[j])
		{
			*t = -1;
			return -1; // не совпадение подстроки
		}
	}

	*t = (k + m2 - 1);


	return 0;



}