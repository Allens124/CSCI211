#include <iostream>
using namespace std;

int toBinary(int n)
{
    if (n < 2)
    {
        return n%2;
    }
    return 10*toBinary(n/2)+n%2;
}

int main()
{
    for (int i = 0; i <= 16; i++)
    {
        cout << toBinary(i) << endl;
    }
    return 0;
}