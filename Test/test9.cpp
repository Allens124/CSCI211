#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (int i = -5; i <= 5; i++)
    {
        cout << i << "\t";
        for (int j = -5; j <= (int) log(i); j++)
        {
            if (j == (int) log(i))
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