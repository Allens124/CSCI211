#include <iostream>
using namespace std;

int magicSum(int cap)
{
    int sum = 0;
    for (int i = 1; i < cap*cap+1; i++)
    {
        sum += i;
    }
    return sum/cap;
}

bool ok(int** s, int r, int c, int cap)
{
    for (int i = 0; i < c; i++)
    {
        if (s[r][c] == s[r][i])
        {
            return false;
        }
    }
    for (int i = 0; i < r; i++)
    {
        if (s[r][c] == s[i][c])
        {
            return false;
        }
    }
    return true;
}

void print(int** s, int cap)
{

}

void magicSquare(int** s, int r, int c, int cap)
{
    if (r == cap)
    {
        print(s);
        return;
    }
    if (c == cap)
    {
        magicSquare(s, r+1, 0, cap);
        return;
    }
    for (int i = 1; i < cap*cap+1; i++)
    {
        s[r][c] = i;
        if (ok(s, r, c, cap))
        {
            magicSquare(s, r, c+1, cap);
        }
    }
}

int main()
{
    int cap;
    cout << "How many rows and columns? ";
    cin >> cap;
    while (cap < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> cap;
    }
    int** s = new int*[cap];
    for (int i = 0; i < cap; i++)
    {
        s[i] = new int[cap];
    }
    magicSquare(s, 0, 0, cap);
    for (int i = 0; i < cap; i++)
    {
        delete[] s[i];
    }
    delete[] s;
    return 0;
}