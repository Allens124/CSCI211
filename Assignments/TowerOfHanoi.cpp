#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> tower[3];
    int from = 0, to = 1, candidate = 1, ring;
    cout << "Enter the number of rings: ";
    cin >> ring;
    while (ring < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    for (int i = ring+1; i > 0; i--)
    {
        tower[0].push_back(i);
    }
    tower[1].push_back(ring+1);
    tower[2].push_back(ring+1);
    tower[to].push_back(candidate);
    tower[from].pop_back();
    if (tower[(to+1)%3].back() < tower[(to+2)%3].back())
    {
        from = (to+1)%3;
    }
    else
    {
        from = (to+2)%3;
    }
    candidate = tower[from].back();
    if (candidate > tower[(from+1)%3].back())
    {
        to = (from+1)%3;
    }
    else
    {
        to = (from+2)%3;
    }
    return 0;
}