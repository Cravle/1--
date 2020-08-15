#include <iostream>
#include <cmath>
#define DEBUG

using namespace std;

int binarySearch(int* arr, int size, int step, int count)
{
    int low;
    int mid;
    int high;

    low = arr[0];
    high = arr[size];
    
    for (int i = 0; i < step; i++)
    {
        mid = (low + high) / 2;
        if (count == mid)
        {
            return mid;
        }
        else if (count > mid)
        {
            low = mid + 1;
        }
        else if (count < mid)
        {
            high = mid - 1;
        }
    }
    
}

int main()
{
    setlocale(LC_ALL, "rus");
    int *arr;
    int size;
    int step;

    int count;
    cout << "Введите размер массива" << endl;
    cin >> size;
    arr = new int[size];
    step = log2(size) + 1;
    cout << "Количество шагов " << step << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
    count = rand() % size + 1;
#ifdef DEBUG
    cout << "Загаданное число> " << count << endl;  
#endif // DEBUG

    cout << "Программа нашла> " << binarySearch(arr, size, step, count) << endl;

    
    
}
