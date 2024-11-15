#include <iostream>
#include <cmath>
using namespace std;

int solCount = 0;

int adj[9][3] =
{
    {-1},
    {0, -1},
    {1, -1},
    {0, 1, -1},
    {1, 2, -1},
    {4, -1},
    {5, -1},
    {5, 6, -1},
    {5, 7, -1}
};

void print(int cross[])
{
    cout << cross[0] << cross[1] << cross[2] << endl;
    cout << cross[3] << " " << cross[4] << endl;
    cout << "  " << cross[5] << endl;
    cout << " " << cross[6] << cross[7] << cross[8] << endl;
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
        if (abs(cross[cap]-cross[adj[cap][i]] == 1))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    //code;
    return 0;
}