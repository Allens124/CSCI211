#include <iostream>
#include <cmath>
using namespace std;

bool isUnjumbled(int n)
{
    if (n < 10)
    {
        return false;
    }
    return isUnjumbled(n/10) || abs((n/10)%10-n%10) < 2;
}

int main()
{
    cout << isUnjumbled(6765) << endl;
    cout << isUnjumbled(1223) << endl;
    cout << isUnjumbled(1235) << endl;
    return 0;
}