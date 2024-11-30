#include <iostream>
#include <cmath>
using namespace std;

bool ok(int b[], int c)
{
    for (int i = 0; i < c; i++)
    {
        if (b[i] == b[c] || c-i == abs(b[c]-b[i]))
        {
            return false;
        }
    }
    return true;
}

int nQueens(int b[], int c, int cap)
{
    static int solCount = 0;
    if (c == cap)
    {
        return ++solCount;
    }
    for (int i = 0; i < cap; i++)
    {
        b[c] = i;
        if (ok(b, c))
        {
            nQueens(b, c+1, cap);
        }
    }
    return solCount;
}

int main()
{
    int n;
    cout << "How many queens? ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    for (int i = 1; i < n+1; i++)
    {
        int q[i];
        cout << "There are " << nQueens(q, 0, i) << " solutions to the " << i << " queens problem\n";
    }
    return 0;
}