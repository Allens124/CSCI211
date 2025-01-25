#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (int x = -5; x <= 5; x++)
    {
        cout << x << "\t";
        for (int y = -5; y <= x*x; y++)
        {
            if (y == x*x)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}