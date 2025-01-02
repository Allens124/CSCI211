#include <iostream>
using namespace std;

string toString(int x)
{
    string result = " ";
    if (x > -1 && x < 10)
    {
        result[0] = '0'+x;
    }
    else if (x > 9 && x < 36)
    {
        result[0] = 'A'+x-10;
    }
    return result;
}

int main()
{
    for (int i = -5; i < 40; i++)
    {
        cout << toString(i) << endl;
    }
    return 0;
}