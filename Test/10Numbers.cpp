#include <iostream>
#include <cmath>
using namespace std;

int solCount = 0;

int adj[10][3] =
{
    {-1},
    {0, -1},
    {0, 1, -1},
    {2, -1},
    {1, 2, -1},
    {2, 3, -1},
    {4, -1},
    {4, 6, -1},
    {5, 7, -1},
    {7, 8, -1}
};

void print(int cross[])
{
    cout << "Solution " << ++solCount << ":" << endl;                                                                                                                                                                                                                                                                                                              
    cout << cross[0] << endl;
    cout << cross[1] << cross[2] << cross[3] << endl;
    cout << cross[4] << " " << cross[5] << endl;
    cout << cross[6] << cross[7] << cross[8] << endl;
    cout << "  " << cross[9] << endl;
}

bool ok(int cross[], int cap)
{
    for (int i = 0; i < cap; i++)
    {
        if (cross[i] == cross[cap])
        {
            return false;
        }
    }
    for (int i = 0; adj[cap][i] != -1; i++)
    {
        if (abs(cross[cap]-cross[adj[cap][i]]) < 3)
        {
            return false;
        }
    }
    return true;
}

void tenNumbers(int cross[], int cap)
{
    if (cap == 10)
    {
        print(cross);
        return;
    }
    for (int i = 0; i < 10; i++)
    {
        cross[cap] = i;
        if (ok(cross, cap))
        {
            tenNumbers(cross, cap+1);
        }
    }
}

int main()
{
    int sol[10];
    int c = 0;
    tenNumbers(sol, c);
    return 0;
}