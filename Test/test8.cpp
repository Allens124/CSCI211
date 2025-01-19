#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[5] = {3, 1, 4, 1, 5};
    vector <int> v(arr, arr+5);
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}