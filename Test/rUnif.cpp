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
    srand(time(0));
    static double sample[n];
    for (int i = 0; i < n; i++)
    {

    }
}

int main()
{
    //code;
    return 0;
}