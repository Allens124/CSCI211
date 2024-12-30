#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double* rUnif(int n, double min = 0, double max = 1)
{
    if (n < 1)
    {
        n = 100;
    }
    if (max < min)
    {
        double temp = max;
        max = min;
        min = temp;
    }
    static double sample[n];
}

int main()
{
    //code;
    return 0;
}