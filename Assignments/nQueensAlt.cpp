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

void eightQueens(int b[], int c, int cap)
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
            eightQueens(b, c+1, cap);
        }
    }
}

int main()
{
    int c = 0;
    for (int i = 1; i < 11; i++)
    {
        int q[i];
        cout << "Number of Queens: " << i << "\n";
        eightQueens(q, c, i);
        cout << "Number of Solutions: " << solCount << "\n";
        solCount = 0;
    }
    return 0;
}