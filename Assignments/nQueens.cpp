#include <iostream>
#include <cmath>
using namespace std;

int solCount = 0;

bool ok(int* q, int c)
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

int nQueens(int* q, int c, int cap)
{
    if (c == cap)
    {
        return solCount+1;
    }
    for (int i = 0; i < cap; i++)
    {
        q[c] = i;
        if (ok(q, c))
        {
            solCount = nQueens(q, c+1, cap);
        }
    }
    return solCount;
}

int main()
{
    int n;
    cout << "Enter the number of queens: ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    for (int i = 1; i <= n; i++)
    {
        int* q = new int[n];
        cout << "There are " << nQueens(q, 0, i) << " solutions to the " << i << " queens problem." << endl;
        solCount = 0;
        delete[] q;
    }
    return 0;
}