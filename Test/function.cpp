#include <iostream>
using namespace std;

typedef bool (*func)(bool);

void bubbleSort(int arr, int size)
{
    bool swap = false;
    for (int i = 0; i < size; i++)
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