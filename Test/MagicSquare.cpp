#include <iostream>
using namespace std;

int magicSum(int cap)
{
    int sum = 0;
    for (int i = 1; i < cap+1; i++)
    {
        sum += i;
    }
    return sum/cap;
}

int main()
{
    //code;
    return 0;
}