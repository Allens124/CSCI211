#include <iostream>
using namespace std;
int main()
{
    const int x = 5;
    const int* p = &x;
    int arr[3] = {1, *p, 3};
    arr[0] = 10;
    arr[1] = 4;
    arr[2] = 7;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}