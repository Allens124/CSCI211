#include <iostream>
using namespace std;
int main()
{
   // Initialize the board to 0
   int q[8][8] = {0};
   // Start in the first row, first column, and place a queen there
   int r = 0, c = 0;
   q[r][c] = 1;
   // Initialize a solution counter
   int sol = 0;

   nextCol:
    // Move to the next column
    c++;
    // If you have passed the last column goto print
    if (c == 8)
    {
        goto print;
    }
    // Move to one before the first row
    r = -1;

   nextRow:
    // Move to the next row
    r++;
    // If you have passed the end of the row, goto backtrack
    if (r == 8)
    {
        goto backtrack;
    }
    // If there is a queen in the same row (to the left), goto nextRow
    for (int col = 0; col < c; col++)
    {
        if (q[r][col] == 1)
        {
            goto nextRow;
        }
    }
    // If there is a queen in the upper-left diagonal, goto nextRow
    for (int i = 1; r-i > -1 && c-i > -1; i++)
    {
        if (q[r-i][c-i] == 1)
        {
            goto nextRow;
        }
    }
    // If there is a queen in the lower-left diagonal, goto nextRow
    for (int i = 1; r+i < 8 && c-i > -1; i++)
    {
        if (q[r+i][c-i] == 1)
        {
            goto nextRow;
        }
    }
    // Place a queen in the current square
    q[r][c] = 1;
    // goto nextCol;
    goto nextCol;

   backtrack:
    // Move to the previous column
    c--;
    // If you have moved to the left of the chessboard, exit the program
    if (c == -1)
    {
        return 0;
    }
    // Find the square in the column with a queen in it, and set r to the row number of that square
    r = 0;
    while (q[r][c] == 0)
    {
        r++;
    }
    // Remove the queen from the current square
    q[r][c] = 0;
    // goto nextRow;
    goto nextRow;

   print:
    // Print the solution number pre-increment
    cout << "Solution: " << ++sol << "\n";
    // Use a nested for loop to print the chessboard
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            cout << q[row][col];
        }
        cout << "\n";
    }
    cout << "\n";
    // goto backtrack;
    goto backtrack;
}