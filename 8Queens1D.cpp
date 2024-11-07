#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int q[8] = {0};
    int c = 0;
    int sol = 0;

    nextCol:
    c++;
    if (c == 8)
    {
        goto print;
    }
    q[c] = -1;

    nextRow:
    q[c]++;
    if (q[c] == 8)
    {
        goto backtrack;
    }
    for (int r = 0; r < c; r++)
    {
        if (q[c] == q[r] || c-r == abs(q[c]-q[r]))
        {
            goto nextRow;
        }
    }
    goto nextCol;

    backtrack:
    c--;
    if (c == -1)
    {
        return 0;
    }
    goto nextRow;

    print:
    cout << "Solution " << ++sol << ":\n| ";
    for (int r = 0; r < 8; r++)
    {
        cout << q[r] << " | ";
    }
    cout << "\n";
    for (int r = 0; r < 8; r++)
    {
        for (int c = 0; c < 8; c++)
        {
            if (q[c] == r)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << "\n";
    }
    cout << "\n";
    goto backtrack;
}