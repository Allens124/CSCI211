#include <iostream>
using namespace std;
int main()
{
    const int x = 10;
    const int* arr[1] = {&x};
    for (int i = 0; i < 1; i++)
    {
        cout << *arr[i] << " ";
    }
    cout << endl;
    return 0;
}