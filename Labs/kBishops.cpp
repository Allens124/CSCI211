#include <iostream>
using namespace std;

int solCount = 0;

bool ok(int q[], int c)
{

}

int kBishops(int q[], int c, int n, int k)
{
    if (c == n)
    {
        return ++solCount;
    }
}

int main()
{
    int n;
    cout << "Enter the dimensions of the board: ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    int b[n];
    for (int k = 0; k < n; k++)
    {
        b[k] = kBishops(b, 0, n, k+1);
        cout << b[k] << endl;
    }
    return 0;
}