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


int main()
{
    for (int i = 0; i < 28; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int randNum = rand() % 28;
            int tmp = tiles[i][j];
            tiles[i][j] = tiles[randNum][j];
            tiles[randNum][j] = tmp;
        }
    }

    for (int i = 0; i < 28; i++)
    {
        cout << " [" << tiles[i][0] << "|" << tiles[i][1] << "] ";
    }
}