#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double v = 5, a = 4;
    const int SIZE = 5;
    int t[SIZE] = { 1, 2, 3, 4, 5 };
    int S[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        S[i] = v * t[i] + ((a * pow(t[i], 2) / 2));
    }

}