#include <iostream>
using namespace std;

int arr[3] = {1, 2, 3};

int main()
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}