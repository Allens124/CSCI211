#include <iostream>
#include <cmath>
using namespace std;

int solCount = 0;

int adj[8][5] = 
{
    {-1}, 
    {0, -1}, 
    {0, -1}, 
    {0, 1, 2, -1}, 
    {0, 1, 3, -1}, 
    {1, 4, -1}, 
    {2, 3, 4, -1}, 
    {3, 4, 5, 6, -1}
};

bool ok(int s[], int b)
{
    for (int i = 0; i < b; i++)
    {
        if (s[i] == s[b])
        {
            return false;
        }
    }
    for (int j = 0; adj[b][j] != -1; j++)
    {
        if (abs(s[b]-s[adj[b][j]]) == 1)
        {
            return false;
        }
    }
    return true;
}

void nextNum(int s[], int & b)
{
    s[b]++;
    if (s[b] > 8)
    {
        b--;
        if (b < 0)
        {
            return;
        }
        nextNum(s, b);
    }
    while (!ok(s, b))
    {
        nextNum(s, b);
    }
    return;
}

void print(int s[], int & b)
{
    cout << "Solution " << ++solCount << ": " << endl;
    for (int i = 0; i < 8; i++)
    {
        if (i == 0 || i == 6)
        {
            cout << " " << s[i];
        }
        else if (i == 1 || i == 5)
        {
            cout << s[i] << "\n";
        }
        else
        {
            cout << s[i];
        }
    }
    cout << "\n";
    b--;
    if (b < 0)
    {
        return;
    }
    nextNum(s, b);
}

void nextBox(int s[], int & b)
{
    b++;
    if (b > 7)
    {
        print(s, b);
        return;
    }
    s[b] = 0;
    nextNum(s, b);
}

int main()
{
    int sol[8];
    sol[0] = 1;
    int box = 0;
    while (box > -1)
    {
        nextBox(sol, box);
    }
    return 0;
}