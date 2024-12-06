#include <iostream>
using namespace std;

int legendre(int n, int p)
{
    if (n < p)
    {
        return 0;
    }
    return legendre(n/p, p)+n/p;
}

int main()
{
    cout << legendre(18, 3) << endl;
    cout << legendre(12, 2) << endl;
    cout << legendre(16, 5) << endl;
    cout << legendre(96, 3) << endl;
    return 0;
}