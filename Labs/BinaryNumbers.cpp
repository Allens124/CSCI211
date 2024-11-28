#include <iostream>
using namespace std;

int decimalToBinary(int n)
{
    if (n < 2)
    {
        return n%2;
    }
    return 10*decimalToBinary(n/2)+n%2;
}

int binaryToDecimal(int n)
{
    if (n < 10)
    {
        return n;
    }
    return 2*binaryToDecimal(n/10)+n%10;
}

int main()
{
    for (int i = 0; i <= 16; i++)
    {
        cout << binaryToDecimal(decimalToBinary(i)) << endl;
    }
    return 0;
}