#include <iostream>
#include <cmath>
using namespace std;

// Create a global variable that counts the total number of solutions
int solCount = 0;

// Create helper array of all of the adjacencies for the ok() function
int adj[8][5] = 
{
    {-1},
    {0, -1}, 
    {0, -1}, 
    {0, 1, 2, -1}, 
    {0, 1, 3, -1}, 
    {1, 4, -1}, 
    {2, 3, 4, -1}, 
    {3, 4, 5, 6, -1},
};

bool ok(int cross[], int cap)
{
    for (int i = 0; i < cap; i++)
    {
        // If any two numbers are used twice, return false
        if (cross[i] == cross[cap])
        {
            return false;
        }
    }
    for (int j = 0; adj[cap][j] != -1; j++)
    {
        // If any two adjacent numbers differ by 1, return false
        if (abs(cross[cap]-cross[adj[cap][j]]) == 1)
        {
            return false;
        }
    }
    return true;
}

void print(int cross[], int cap)
{
    // Output the current number of solutions using a pre-increment
    cout << "Solution " << ++solCount << ":" << endl;
    // Using a for loop, print the current solution
    for (int i = 0; i < 8; i++)
    {
        if (i == 0 || i == 6)
        {
            cout << " " << cross[i];
        }
        else if (i == 1 || i == 5)
        {
            cout << cross[i] << "\n";
        }
        else
        {
            cout << cross[i];
        }
    }
    cout << "\n";
    return;
}

void eightNumbers(int cross[], int cap)
{
    if (cap == 8)
    {
        // If every box has been filled, call the print() function
        print(cross, cap);
        return;
    }
    // Using a for loop, fill in each box with a number between 1 and 8
    for (int i = 1; i < 9; i++)
    {
        cross[cap] = i;
        if (ok(cross, cap))
        {
            // If the conditions are met, move onto the next box
            eightNumbers(cross, cap+1);
        }
    }
}

int main()
{
    // Create an array with eight elements that represents each box
    int sol[8];
    // Create a variable that represents the current box, and initialize it to 0
    int c = 0;
    eightNumbers(sol, c);
    return 0;
}