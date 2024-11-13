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
    cout << "Move " << ++moves << ": Transfer Ring " << candidate << " from Tower " << char(from+'A') << " to Tower " << char(to+'A') << endl;
    tower[to].push_back(candidate);
    tower[from].pop_back();
    if (tower[1].size() == ring+1)
    {
        return;
    }
    from = tower[(to+1)%3].back() < tower[(to+2)%3].back() ? (to+1)%3 : (to+2)%3;
    candidate = tower[from].back();
    to = candidate < tower[(from+1)%3].back() ? (from+1)%3 : (from+2)%3;
    towerOfHanoi(from, to, candidate, ring);
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