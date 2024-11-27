#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {0};
    for (int i = 0; i < 3*3; i++)
    {
        cout << *(*(arr+i)) " ";
    }
    cout << endl;
    return 0;
}