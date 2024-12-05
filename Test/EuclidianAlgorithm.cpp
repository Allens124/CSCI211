#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a%b == 0)
    {
        return b;
    }
    return gcd(b, a%b);
}

int main()
{
    cout << gcd(20, 70) << endl;
    cout << gcd(36, 60) << endl;
    cout << gcd(2345, 5000) << endl;
    return 0;
}