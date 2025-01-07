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
};

bool ok(int b[9][9], int r, int c)
{
    for (int i = 0; i < 9; i++)
    {
        if (b[r][i] == b[r][c] && i != c)
        {
            return false;
        }
        if (b[i][c] == b[r][c] && i != r)
        {
            return false;
        }
    }
    return true;
}

void print(int b[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

void sudoku(int b[9][9], int r, int c)
{
    if (r == 3)
    {
        cout << "Start!" << endl;
        print(b);
        cout << "Finish!" << endl;
        return;
    }
    if (c == 3)
    {
        sudoku(b, r+1, 0);
        return;
    }
    /*if (board[r][c] != 0)
    {
        if (ok(b, r, c))
        {
            sudoku(b, r, c+1);
        }
        else
        {
            return;
        }
    }*/
    for (int i = 1; i < 10; i++)
    {
        b[r][c] = i;
        if (ok(b, r, c))
        {
            sudoku(b, r, c+1);
        }
    }
}

int main()
{
    sudoku(board, 0, 0);
    return 0;
}