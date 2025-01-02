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

string toBaseN(int x, int n)
{
    if (x < n)
    {
        return toString(x);
    }
    if (n == 1)
    {
        string result = "";
        for (int i = 0; i < x; i++)
        {
            result += "1";
        }
        return result;
    }
    return toBaseN(x/n, n)+toString(x%n);
}

int main()
{
    cout << toBaseN(10, 2) << endl;
    cout << toBaseN(127, 5) << endl;
    cout << toBaseN(324, 10) << endl;
    cout << toBaseN(231, 16) << endl;
    return 0;
}