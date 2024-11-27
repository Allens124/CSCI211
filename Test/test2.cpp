#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = 
    {
        {3, 1, 4},
        {1, 5, 9},
        {2, 6, 5}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *(*(arr+i)+j) << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3*3; i++)
    {
        cout << *(*(arr)+i) << " ";
    }
    cout << endl;
    return 0;
}