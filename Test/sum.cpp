#include <iostream>
using namespace std;

int f(int k[2], int size)
{
    int sum = 0;
    cout << sizeof(k) << endl;
    for (int i = 0; i < 3; i++)
    {
        sum += k[i];
    }
    return sum;
}

int main()
{
    int a[] = {1, 2, 3};
    cout << sizeof(a) << endl;
    cout << f(a, 5) << endl;
    return 0;
}