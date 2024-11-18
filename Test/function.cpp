#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef bool (*func)(bool);

void bubbleSort(int arr, int size)
{
    bool swap = true;
    while (swap)
    {
        swap = false;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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