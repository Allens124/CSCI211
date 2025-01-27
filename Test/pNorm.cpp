#include <iostream>
#include <cmath>
using namespace std;

double pNorm(double lower, double upper, double mu, double sigma)
{
    double area = 0;
    double z1 = (lower-mu)/sigma;
    double z2 = (upper-mu)/sigma;
    for (int i = z1; i <= z2; i += 0.001)
    {
        area += 1/sqrt(2*3.14159)*exp(-1*i*i);
    }
    return area;
}

int main()
{
    //code;
    return 0;
}