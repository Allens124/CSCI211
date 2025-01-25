#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (int i = -5; i <= 5; i++)
    {
        cout << i << "\t";
        for (int j = -5; j <= (int)exp(i); j++)
        {
            if (j == (int)exp(i))
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