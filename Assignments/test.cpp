#include <iostream>
#include <vector>
using namespace std;

vector <int> tower[3];
int moves = 0;

void fillTowers(vector <int> tower[], int ring)
{
    for (int i = ring+1; i > 0; i--)
    {
        tower[0].push_back(i);
    }
    tower[1].push_back(ring+1);
    tower[2].push_back(ring+1);
}

void towerOfHanoi(int from, int to, int candidate, int ring)
{
    
}

int main()
{
    int from = 0, to = 1, candidate = 1, ring;
    cout << "Enter an odd number of rings: ";
    cin >> ring;
    while (ring%2 == 0 || ring < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> ring;
    }
    fillTowers(tower, ring);
    towerOfHanoi(from, to, candidate, ring);
    return 0;
}