#include <iostream>
#include <cmath>
using namespace std;

bool ok(int* q, int c)
{
    for (int i = 0; i < c; i++)
    {
        if (q[i] == q[c] || c-i == abs(q[c]-q[i]))
        {
            return false;
        }
    }
    return true;
}

int nQueens(int* q, int c, int cap)
{
    static int solCount = 0;
    return 0;
}

int main()
{
    int n;
    cout << "Enter the number of queens: ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    for (int i = 1; i <= n; i++)
    {
        int* q = new int[n];

        delete[] n;
    }
    return 0;
}