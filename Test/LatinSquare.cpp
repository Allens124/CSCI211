#include <iostream>
using namespace std;

bool ok(char b[], int c, int cap)
{
    for (int i = 0; i < c; i++)
    {
        if (b[c] == b[i])
        {
            return false;
        }
    }
    return true;
}

void print(char b[], int cap)
{
    for (int i = 0; i < cap; i++)
    {
        //code;
    }
}

void latinSquare(char b[], int c, int cap)
{
    if (c == cap)
    {
        print(b, cap);
        return;
    }
    for (int i = 0; i < cap; i++)
    {
        b[i] = 'A'+i;
        if (ok(b, c, cap))
        {
            latinSquare(b, c+1, cap);
        }
    }
}

int main()
{
    int cap;
    cout << "How many rows and columns? ";
    cin >> cap;
    if (cap < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> cap;
    }
    char b[cap];
    latinSquare(b, 0, cap);
    return 0;
}