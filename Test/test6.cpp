#include <iostream>
using namespace std;

string toString(int x)
{
    string result = " ";
    if (x < 0)
    {
        return result;
    }
    else if (x < 10)
    {
        result[0] = '0'+x;
        return result
    }
    result[0] = 'A'+x;
    return result;
}

int main()
{
    //code;
    return 0;
}