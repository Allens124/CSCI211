#include <iostream>
using namespace std;
int main()
{
    int** arr = new int*[9];
    for (int i = 0; i < 9; i++)
    {
        arr[i] = new int[9];
    }
    for (int i = 0; i < 9; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}