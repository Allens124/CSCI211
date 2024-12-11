#include <iostream>
using namespace std;

void collatz(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    cout << n << ", ";
    if (n%2 == 0)
    {
        collatz(n/2);
    }
    else
    {
        collatz(3*n+1);
    }
}

int main()
{
    collatz(205);
    collatz(505);
    return 0;
}