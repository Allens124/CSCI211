#include <iostream>
using namespace std;

int solCount = 0;

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
}

int main()
{
    //code;
    return 0;
}