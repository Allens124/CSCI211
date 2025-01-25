#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << "\t";
        for (int j = 0; j <= i*i; j++)
        {
            if (j == i*i)
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