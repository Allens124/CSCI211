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

int main()
{
    for (int i = 0; i <= 16; i++)
    {
        cout << decimalToBinary(i) << endl;
    }
    return 0;
}