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
    cout << binaryExp(2, 50) << endl;
    cout << binaryExp(3, 20) << endl;
    cout << binaryExp(5, 10) << endl;
    return 0;
}