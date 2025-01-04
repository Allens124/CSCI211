#include <iostream>
using namespace std;

int board[9][9] =
{
    {5, 0, 0, 0, 0, 9, 0, 2, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 9},
    {0, 0, 0, 4, 5, 2, 0, 0, 6},
    {0, 8, 0, 9, 7, 4, 0, 0, 0},
    {2, 1, 0, 0, 3, 0, 4, 6, 0},
    {0, 0, 4, 2, 0, 1, 8, 0, 5},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {8, 0, 0, 0, 0, 7, 0, 0, 0},
    {0, 7, 3, 0, 9, 0, 6, 5, 0}
}

bool ok(int** b, int r, int c)
{
    return true;
}

void print(int** b)
{

}

void sudoku(int** b, int r, int c)
{
    if (r == 9)
    {
        print(b);
        return;
    }
    if (c == 9)
    {
        sudoku(b, r+1, c);
        return;
    }
}

int main()
{
    //code;
    return 0;
}