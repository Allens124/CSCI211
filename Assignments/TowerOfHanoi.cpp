#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> tower[3];
    int ring, to, from;
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
    tower[1].push_back(4);
    tower[2].push_back(4);
    return 0;
}