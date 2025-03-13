#include <iostream>
using namespace std;

int binaryExp(int base, int exp)
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
    cout << binaryExp(2, 3) << endl;
    return 0;
}