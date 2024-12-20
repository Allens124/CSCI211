#include <iostream>
using namespace std;

int* newArray(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    return arr;
}

int main()
{
    int arr[] = newArray(5);
    return 0;
}