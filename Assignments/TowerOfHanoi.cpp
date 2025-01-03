#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Declare an array of three vectors that represent each tower
    vector <int> tower[3];
    // Declare variables that represent the rings and their destinations
    int from = 0, to, moves = 0, candidate = 1, ring;
    // Prompt the user for a number of rings
    cout << "Enter any number of rings: ";
    cin >> ring;
    // Using a while loop, ensure that the input is neither even nor negative
    while (ring < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> ring;
    }
    // If the number of rings is odd, the to tower is the first tower to the right
    if (ring%2 == 1)
    {
        to = 1;
    }
    // If the number of rings is even, the to tower is the first tower to the left
    else
    {
        to = 2;
    }
    // Fill Tower A with rings, with the smallest on top and the largest on the bottom
    for (int i = ring+1; i > 0; i--)
    {
        tower[0].push_back(i);
    }
    // Set a placeholder value of ring+1 on the bottom of Tower B and Tower C
    tower[1].push_back(ring+1);
    tower[2].push_back(ring+1);
    // Using a while loop, ensure that the process continues until all rings from Tower A are placed onto Tower B
    while (tower[1].size() < ring+1)
    {
        // Output the current number of moves as well as the current position of the last ring that was moved
        cout << "Move " << ++moves << ": Transfer Ring " << candidate << " from Tower " << char(from+'A') << " to Tower " << char(to+'A') << endl;
        // Move the current candidate to the next available tower on the right
        tower[to].push_back(candidate);
        // Remove the current candidate from its previous tower
        tower[from].pop_back();
        // Determine whether the number of rings is odd
        if (ring%2 == 1)
        {
            // Change the value of the from tower, based on which tower has the smallest ring on top
            if (tower[(to+1)%3].back() < tower[(to+2)%3].back())
            {
                // If the tower to the immediate right has a smaller ring on top, make it the new from tower
                from = (to+1)%3;
            }
            else
            {
                // If the tower after the next one has a smaller ring on top, make it the new from tower
                from = (to+2)%3;
            }
            // Set the candidate equal to the ring on top of the new from tower
            candidate = tower[from].back();
            // Change the value of the to tower, based on whether the candidate can move to it
            if (candidate < tower[(from+1)%3].back())
            {
                // If the current candidate is smaller than the ring on top of the next tower to the right, make that tower the new to tower
                to = (from+1)%3;
            }
            else
            {
                // If the current candidate is larger than the ring on top of the next tower to the right, make the tower after the next one the new to tower
                to = (from+2)%3;
            }
        }
        // Determine whether the number of rings is even
        else
        {
            // Change the value of the from tower, based on which tower has the smallest ring on top
            if (tower[(to+2)%3].back() < tower[(to+1)%3].back())
            {
                // If the tower to the immediate left has a smaller ring on top, make it the new from tower
                from = (to+2)%3;
            }
            else
            {
                // If the tower before the next one has a smaller ring on top, make it the new from tower
                from = (to+1)%3;
            }
            // Set the candidate equal to the ring on top of the new from tower
            candidate = tower[from].back();
            // Change the value of the to tower, based on whether the candidate can move to it
            if (candidate < tower[(from+2)%3].back())
            {
                // If the current candidate is smaller than the ring on top of the next tower to the left, make that tower the new to tower
                to = (from+2)%3;
            }
            else
            {
                // If the current candidate is larger than the ring on top of the next tower to the left, make the tower before the next one the new to tower
                to = (from+1)%3;
            }
        }
    }
    return 0;
}