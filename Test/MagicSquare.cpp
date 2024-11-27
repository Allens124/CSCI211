#include <iostream>
using namespace std;

int solSum = 0;
int solCount = 0;

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
    for (int i = 0; i < cap*r+c; i++)
    {
        if (*(*(s+r)+c) == *(*(s)+i))
        {
            return false;
        }
    }
    if (c == cap-1)
    {
        int sum = 0;
        for (int i = 0; i < cap; i++)
        {
            sum += s[r][i];
        }
        if (sum != solSum)
        {
            return false;
        }
    }
    if (r == cap-1)
    {
        int sum = 0;
        for (int i = 0; i < cap; i++)
        {
            sum += s[i][c];
        }
        if (sum != solSum)
        {
            return false;
        }
    }
    if (c == cap-1 && r == cap-1)
    {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < cap; i++)
        {
            sum1 += s[i][i];
            sum2 += s[i][cap-i-1];
        }
        if (sum1 != solSum || sum2 != solSum)
        {
            return false;
        }
    }
    return true;
}

void print(int** s, int cap)
{
    cout << "Solution " << ++solCount << ":\n";
    for (int i = 0; i < cap; i++)
    {
        for (int j = 0; j < cap; j++)
        {
            cout << s[i][j] << "\t";
        }
        cout << "\n";
    }
}

void magicSquare(int** s, int r, int c, int cap)
{
    if (r == cap)
    {
        print(s, cap);
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
    solSum = magicSum(cap);
    magicSquare(s, 0, 0, cap);
    for (int i = 0; i < cap; i++)
    {
        delete[] s[i];
    }
    delete[] s;
    return 0;
}