#include <iostream>
using namespace std;

bool ok(int q[], int c, int cap)
{
    for (int i = 0; i < c; i++)
    {
        if (q[i] == q[c])
        {
            return false;
        }
    }
    return true;
}

void print(int q[], int cap)
{

}

void nQueens(int q[], int c, int cap)
{

}

int main()
{
    int n;
    cout << "How many queens? ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    for (int i = 0; i < n+1; i++)
    {
        int* q = new int[i];
    }
    delete[] q;
    return 0;
}