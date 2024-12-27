#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the tree: ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    for (int r = 0; r < n/2; r++)
    {
        for (int c = 0; c < n; c++)
        {
            if (r == 0)
            {
                if (c == n/2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else if (r == n/2-1)
            {
                if (c == n/2-1 || c == n/2+1)
                {
                    cout << "|";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (c+r >= n/2 && c-r <= n/2 && c%2 != 0)
                {
                    cout << "+";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}