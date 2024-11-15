#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Declare an array of three vectors that represent each tower
    vector <int> tower[3];
    // Declare variables that represent the rings and their destinations
    int from = 0, to, candidate = 1, moves = 0, ring;
    // Prompt the user for a number of rings
    cout << "Enter any number of rings: ";
    cin >> ring;
    // Using a while loop, ensure that the input is neither even nor negative
    while (ring < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> ring;
    }
    // Determine whether the two tower is to the left or to the right
    to = ring%2 == 1 ? 1 : 2;
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
        if (ring%2 == 1)
        {
            // Change the value of the from tower, based on which tower has the smallest ring on top
            from = tower[(to+1)%3].back() < tower[(to+2)%3].back() && ? (to+1)%3 : (to+2)%3;
            // Set the candidate equal to the ring on top of the new from tower
            candidate = tower[from].back();
            // Change the value of the to tower, based on whether the candidate can move to it
            to = candidate < tower[(from+1)%3].back() && ? (from+1)%3 : (from+2)%3;
        }
        else
        {
            
        }
    }
    return 0;
}