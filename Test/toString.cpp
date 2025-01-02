#include <iostream>
using namespace std;

string toString(int x)
{
    string last = "0";
    if (x < 0)
    {
        return last;
    }
    last[0] += x%10;
    if (x < 10)
    {
        return last;
    }
    return toString(x/10)+last;
}

int main()
{
    string num = toString(56281);
    cout << num << endl;
    return 0;
}