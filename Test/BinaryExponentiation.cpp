#include <iostream>
using namespace std;

unsigned long long binaryExp(unsigned long long base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    if (exp%2 == 0)
    {
        return binaryExp(base*base, exp/2);
    }
    return base*binaryExp(base*base, exp/2);
}

int main()
{
    for (int i = 0; i < 50; i++)
    {
        cout << binaryExp(2, i) << endl;
    }
    return 0;
}