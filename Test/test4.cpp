#include <iostream>
using namespace std;

int pow(double base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return base*pow(base, exp-1);
}

int main()
{
    //code;
    return 0;
}