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

void print(char b[])
{
    cout << " " << b[0] << b[1] << endl;
    cout << b[2] << b[3] << b[4] << b[5] << endl;
    cout << " " << b[6] << b[7] << endl;
}

bool ok(char b[], int c)
{
    for (int i = 0; i < c; i++)
    {
        if (b[i] == b[c])
        {
            return false;
        }
    }
    for (int i = 0; adj[c][i] != '!'; i++)
    {
        if (abs(adj[c][i]-b[c]) == 1)
        {
            return false;
        }
    }
    return true;
}

void eightLetters(char b[], int c)
{
    if (c == 8)
    {
        print(b, c);
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        b[c] = 'a'+i;
        if (ok(b, c))
        {
            eightLetters(b, c+1);
        }
    }
}

int main()
{
    char b[8];
    int c = 0;
    eightLetters(b, c);
    return 0;
}