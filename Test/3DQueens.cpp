#include <iostream>
#include <cmath>
using namespace std;

int solCount = 0;

bool ok(int q[8][8], int l, int c)
{
    return true;
}

void print(int q[8][8])
{
    cout << "Solution " << ++solCount << ":\n";
    for (int i = 0; i < 8; i++)
    {
        cout << "Layer " << i << ":\n";
        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
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
    }
}

void eightQueens(int q[8][8], int l, int c)
{
    if (l == 8)
    {
        print(q);
    }
    if (c == 8)
    {
        eightQueens(q, l+1, 0);
    }
    for (int i = 0; i < 8; i++)
    {
        q[l][c] = i;
        if (ok(q, l, c))
        {
            eightQueens(q, l, c+1);
        }
    }
}

int main()
{
    int q[8][8] = {0};
    int l = 0, c = 0;
    eightQueens(q, l, c);
    return 0;
}