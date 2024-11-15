#include <iostream>
#include <cmath>
using namespace std;

// Create a global variable that counts the total number of solutions
int solCount = 0;
typedef string box[5][7];
box bb, wb, bq, wq, *board[8][8];

void fillBoards()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            bb[i][j] = "\u2588";
            wb[i][j] = " ";
            if (j == 0 || j == 6)
            {
                bq[i][j] = " ";
                wq[i][j] = "\u2588";
            }
            else if (i == 0 || i == 4)
            {
                bq[i][j] = " ";
                wq[i][j] = "\u2588";
            }
            else if (i == 1)
            {
                if (j%2 == 0)
                {
                    bq[i][j] = " ";
                    wq[i][j] = "\u2588";
                }
                else
                {
                    bq[i][j] = "\u2588";
                    wq[i][j] = " ";
                }
            }
            else
            {
                bq[i][j] = "\u2588";
                wq[i][j] = " ";
            }
        }
    }
}

bool ok(int b[], int c)
{
    for (int i = 0; i < c; i++)
    {
        /* If any two columns have a queen on the same row OR
        if any queens occupy the same diagonals, return false */
        if (b[c] == b[i] || c-i == abs(b[c]-b[i]))
        {
            return false;
        }
    }
    return true;
}

void print(int b[])
{
    for (int r = 0; r < 8; r++)
    {
        for (int c = 0; c < 8; c++)
        {
            if ((r+c)%2 == 0)
            {
                if (b[c] == r)
                {
                    board[r][c] = &bq;
                }
                else
                {
                    board[r][c] = &wb;
                }
            }
            else
            {
                if (b[c] == r)
                {
                    board[r][c] = &wq;
                }
                else
                {
                    board[r][c] = &bb;
                }
            }
        }
    }
    // Output the current number of solutions using a pre-increment
    cout << "Solution " << ++solCount << ":\n| ";
    // Using a for loop, print the current solution
    for (int r = 0; r < 8; r++)
    {
        cout << b[r] << " | ";
    }
    cout << "\n";
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "\u258F";
            for (int k = 0; k < 8; k++)
            {
                for (int l = 0; l < 7; l++)
                {
                    cout << (*board[i][k])[j][l];
                }
            }
            cout << "\u2595" << "\n";
        }
    }
}

int main()
{
    fillBoards();
    // Create an array with eight elements the represents the board
    int q[8];
    // Create a variable that represents the current box, and initialize it to 0
    int c = 0;
    // Start at the first row of the first column by setting the first element equal to 0
    q[c] = 0;
    // Using a while loop, ensure that all solutions are considered while on the board
    while (c > -1)
    {
        // Move to the next column
        c++;
        if (c == 8)
        {
            // If all of the columns are filled, call the print() function
            print(q);
            // Backtrack to the previous column
            c--;
        }
        else
        {
            // Start one before the first row of the next column
            q[c] = -1;
        }
        // Using a while loop, ensure that every column has a queen placed in it
        while (q[c] < 8)
        {
            // Attempt to place a queen in the next available row
            q[c]++;
            if (q[c] > 7)
            {
                // If there is no place for a queen in a given column, backtrack
                c--;
            }
            else if (ok(q, c))
            {
                // Otherwise, if a queen can be placed in a given column, move on to the next one
                break;
            }
        }
    }
    return 0;
}