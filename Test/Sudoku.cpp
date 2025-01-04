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

bool ok(int** b, int r, int c)
{
    for (int i = 0; i < c; i++)
    {
        if (b[r][i] == b[r][c])
        {
            return false;
        }
    }
    for (int i = 0; i < r; i++)
    {
        if (b[i][c] == b[r][c])
        {
            return false;
        }
    }
    return true;
}

void print(int** b)
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
    int** solution = new int*[9];
    for (int i = 0; i < 9; i++)
    {
        solution[i] = new int[9];
    }
    sudoku(board, 0, 0);
    for (int i = 0; i < 9; i++)
    {
        delete[] solution[i];
    }
    return 0;
}