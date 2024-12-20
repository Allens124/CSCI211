#include <iostream>
using namespace std;

int* newArray(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        *(arr+i) = n;
    }
    return arr;
}

int main()
{
    int* arr = newArray(5);
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr+i) << " ";
    }
    cout << endl;
    return 0;
}