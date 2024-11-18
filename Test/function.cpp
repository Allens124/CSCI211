#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef bool (*func)(bool);

void fillRandom(int arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int )
    }
}

void bubbleSort(int arr, int size)
{
    bool swap = true;
    while (swap)
    {
        swap = false;
        for (int i = 0; i < size-1; i++)
        {
            if (arr[i] < arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swap = true;
            }
        }
    }
}

int main()
{
    //code;
    return 0;
}