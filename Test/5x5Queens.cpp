#include <iostream>
#include <cmath>
using namespace std;

int solCount = 0;

bool ok(int q[5][5], int l, int c)
{
    for (int i = 0; i < l; i++)
    {
        if (q[l][c] == q[i][c])
        {
            return false;
        }
    }
    for (int i = 0; i < c; i++)
    {
        if (q[l][c] == q[l][i] || abs(q[l][c]-q[l][i]) == c-i)
        {
            return false;
        }
    }
    return true;
}

void print(int q[5][5])
{
    cout << "Solution " << ++solCount << ":\n\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Layer " << i+1 << ":\n";
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (q[i][k] == j)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
            cout << "\n";
        }
        cout << "\n";
    }
}

void nQueens(int q[5][5], int l, int c)
{
    if (l == 5)
    {
        print(q);
        return;
    }
    if (c == 5)
    {
        nQueens(q, l+1, 0);
        return;
    }
    for (int i = 0; i < 5; i++)
    {
        q[l][c] = i;
        if (ok(q, l, c))
        {
            nQueens(q, l, c+1);
        }
    }
}

int main()
{
    int q[5][5] = {0};
    nQueens(q, 0, 0);
    return 0;
}