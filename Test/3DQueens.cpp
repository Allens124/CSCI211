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
    //code;
    return 0;
}