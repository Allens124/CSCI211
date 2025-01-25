#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << "\t";
        for (int j = 0; j*j <= i; j++)
        {
            if (j*j == i)
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