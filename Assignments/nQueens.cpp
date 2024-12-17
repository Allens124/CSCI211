#include <iostream>
#include <cmath>
using namespace std;

bool ok(int* q, int c)
{
    for (int i = 0; i < c; i++)
    {
        /* If any two columns have a queen on the same row OR
        if any queens occupy the same diagonals, return false */
        if (q[i] == q[c] || c-i == abs(q[c]-q[i]))
        {
            return false;
        }
    }
    return true;
}

int nQueens(int* q, int c, int cap, int sol)
{
    // If the current column is equal to the number of columns, return the incremented solution count
    if (c == cap)
    {
        return sol+1;
    }
    // Using a for loop, try to place a queen in row 0 through row cap
    for (int i = 0; i < cap; i++)
    {
        q[c] = i;
        // Using the ok() function, check if a queen can be placed
        if (ok(q, c))
        {
            // If a queen can be placed, call the next iteration of the function, and set the solution count equal to it
            sol = nQueens(q, c+1, cap, sol);
        }
    }
    // If no queens can be placed, return the current solution count
    return sol;
}

int main()
{
    // Declare a variable that represents the number of queens
    int n;
    // Prompt the user to enter a number of queens
    cout << "Enter the number of queens: ";
    cin >> n;
    // Using a while loop, ensure that the input is valid
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    // Using a for loop, dynamically allocate and deallocate memory from arrays of sizes 1 through n
    for (int i = 1; i <= n; i++)
    {
        int* q = new int[n];
        // Print out the number of solutions corresponding to the current number of queens
        cout << "There are " << nQueens(q, 0, i, 0) << " solutions to the " << i << " queens problem." << endl;
        delete[] q;
    }
    return 0;
}