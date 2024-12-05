#include <iostream>
#include <cmath>
using namespace std;

bool isJumbled(int n)
{
    if (n < 10)
    {
        return false;
    }
    return isJumbled(n/10) || abs((n/10)%10-n%10) > 1;
}

int main()
{
    cout << isJumbled(6765) << endl;
    cout << isJumbled(1223) << endl;
    cout << isJumbled(1235) << endl;
    return 0;
}