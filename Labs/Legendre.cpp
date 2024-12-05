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
    //code;
    return 0;
}