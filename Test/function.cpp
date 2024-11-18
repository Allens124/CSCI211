#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef bool (*func)(bool);

void fillRandom(int arr[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1+rand()%100;
    }
}

void bubbleSort(int arr[], int size)
{
    bool swap = true;
    while (swap)
    {
        swap = false;
        for (int i = 0; i < size-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swap = true;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[10];
    fillRandom(a, 10);
    printArray(a, 10);
    bubbleSort(a, 10);
    printArray(a, 10);
    return 0;
}