#include <iostream>
#include <cmath>
using namespace std;

int solCount = 0;

bool ok(int q[], int c)
{
    for (int i = 0; i < c; i++)
    {
        if (q[i] == q[c] || c-i == abs(q[c]-q[i]))
        {
            return false;
        }
    }
    return true;
}

void nQueens(int q[], int c, int cap)
{
    if (c == cap)
    {
        solCount++;
        return;
    }
    for (int i = 0; i < cap; i++)
    {
        q[c] = i;
        if (ok(q, c))
        {
            nQueens(q, c+1, cap);
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
        int* q = new int[i];
        nQueens(q, 0, i);
        cout << "There are " << solCount << " solutions to the " << i << " queens problem" << endl;
        solCount = 0;
        delete[] q;
    }
    return 0;
}