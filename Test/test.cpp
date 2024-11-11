#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        for (char i = 33; i < 127; i++)
        {
            cout << i << char(8);
        }
        break;
    }
    return 0;
}