#include <iostream>
using namespace std;

string toString(int x)
{
    string last = "0";
    last[0] += x%10;
    if (x < 10)
    {
        return last;
    }
    return toString(x/10)+last;
}

int main()
{
    //code;
    return 0;
}