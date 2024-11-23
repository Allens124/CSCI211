#include <iostream>
using namespace std;

bool ok(char** b, int c, int r, int cap)
{
    for (int i = 0; i < c; i++)
    {
        if (b[r][c] == b[r][i])
        {
            return false;
        }
    }
    for (int i = 0; i < r; i++)
    {
        
    }
    return true;
}

void print(char** b, int cap)
{
    for (int i = 0; i < cap; i++)
    {
        //code;
    }
}

void latinSquare(char** b, int c, int r, int cap)
{
    if (r == cap)
    {
        print(b, cap);
        return;
    }
    if (c == cap)
    {
        latinSquare(b, 0, r+1, cap);
        return;
    }
    for (int i = 0; i < cap; i++)
    {
        b[i] = 'A'+i;
        if (ok(b, c, r, cap))
        {
            latinSquare(b, c+1, r, cap);
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
    char** b = new char*[cap];
    for (int i = 0; i < cap; i++)
    {
        b[i] = new char[cap];
    }
    latinSquare(b, 0, 0, cap);
    for (int i = 0; i < cap; i++)
    {
        delete[] b[i];
    }
    delete[] b;
    return 0;
}