#include <iostream>
#include <cmath>
using namespace std;

bool isJumbled(int n)
{
    if (n < 10)
    {
        return false;
    }
    return isJumbled(n/10) || abs((n/10)%10-n%10) == 1;
}

int main()
{
    //code;
    return 0;
}