#include <iostream>
#include <cmath>
using namespace std;

int solCount = 0;

char adj[8][5] =
{
    {'!'},
    {'a', '!'},
    {'a', '!'},
    {'a', 'b', 'c', '!'},
    {'a', 'b', 'd', '!'},
    {'b', 'e', '!'},
    {'c', 'd', 'e', '!'},
    {'d', 'e', 'f', 'g', '!'}
};

void print(char cross[])
{
    cout << "Solution " << ++solCount << ":" << endl;
    cout << " " << cross[0] << cross[1] << endl;
    cout << cross[2] << cross[3] << cross[4] << cross[5] << endl;
    cout << " " << cross[6] << cross[7] << endl;
}

bool ok(char cross[], int cap)
{
    for (int i = 0; i < cap; i++)
    {
        if (cross[i] == cross[cap])
        {
            return false;
        }
    }
    for (int i = 0; adj[cap][i] != '!'; i++)
    {
        if (abs(cross[cap]-cross[adj[cap][i]-'a']) == 1)
        {
            return false;
        }
    }
    return true;
}

void eightLetters(char cross[], int cap)
{
    if (cap == 8)
    {
        print(cross);
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        cross[cap] = 'a'+i;
        if (ok(cross, cap))
        {
            eightLetters(cross, cap+1);
        }
    }
}

int main()
{
    char sol[8];
    int c = 0;
    eightLetters(sol, c);
    return 0;
}