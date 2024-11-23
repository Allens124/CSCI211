#include <iostream>
#include <cmath>
using namespace std;

int solCount = 0;

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

void nQueens(int b[], int c, int cap)
{
    if (c == cap)
    {
        solCount++;
        return;
    }
    for (int i = 0; i < cap; i++)
    {
        b[c] = i;
        if (ok(b, c))
        {
            nQueens(b, c+1, cap);
        }
    }
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
        nQueens(q, 0, i);
        cout << "There are " << solCount << " solutions to the " << i << " queens problem\n";
        solCount = 0;
    }
    return 0;
}