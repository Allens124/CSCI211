#include <iostream>
using namespace std;

// Create a global variable that counts the total number of solutions
int solCount = 0;

int mp[3][3] = 
{
    {0, 2, 1},
    {0, 2, 1},
    {1, 2, 0}
};

int wp[3][3] =
{
    {2, 1, 0},
    {0, 1, 2},
    {2, 0, 1}
};

bool ok(int b[], int c)
{
    for (int i = 0; i < c; i++)
    {
        // If two women have the same level of attraction, return false
        if (b[i] == b[c])
        {
            return false;
        }
        /* If a current man's attraction for a new woman is greater than his attraction for a current woman AND
        if the new woman's attraction for a current man is greater than her attraction for the new man, return false */
        if (mp[i][b[c]] < mp[i][b[i]] && wp[b[c]][i] < wp[b[c]][c])
        {
            return false;
        }
        /* If a new man's attraction for a current woman is greater than his attraction for the new woman AND
        if a current woman's attraction for a new man is greater than her attraction for a current man, return false */
        if (mp[c][b[i]] < mp[c][b[c]] && wp[b[i]][c] < wp[b[i]][i])
        {
            return false;
        }
    }
    return true;
}

void print(int b[])
{
    // Output the current number of solutions using a pre-increment
    cout << "Solution " << ++solCount << ":\n";
    cout << "Man\t\tWoman\n";
    // Using a for loop, print the current solution
    for (int i = 0; i < 3; i++)
    {
        cout << i << "\t\t" << b[i] << "\n";
    }
    cout << "\n";
}

int main()
{
    // Create an array with three elements the represents the pairings for men
    int q[3];
    // Create a variable that represents the new person, and initialize it to 0
    int c = 0;
    // Start at the first row of the first column by setting the first element equal to 0
    q[c] = 0;
    // Using a while loop, ensure that all solutions are considered
    while (c > -1)
    {
        // Move to the next new person
        c++;
        if (c == 3)
        {
            // If every relationship is stable, call the print() function
            print(q);
            // Backtrack to the previous new person
            c--;
        }
        else
        {
            // Otherwise, prepare to test the stability of the relationships with the new person added
            q[c] = -1;
        }
        // Using a while loop, ensure that every relationship is stable
        while (q[c] < 3)
        {
            // Attempt to pair the next person
            q[c]++;
            if (q[c] > 2)
            {
                // If no pairings can be made, backtrack
                c--;
            }
            else if (ok(q, c))
            {
                // Otherwise, if a stable pairing can be made, exit the loop
                break;
            }
        }
    }
    return 0;
}