#include <iostream>
using namespace std;

typedef double (*func)(double);

double integrate(func f, double a, double b)
{
    double area = 0;
    for double (i = a; i < b; i += 0.01)
    {
        area += i*f(i);
    }
    return area;
}

double line(double x)
{
    return x;
}

double square(double x)
{
    return x*x;
}

double cube(double x)
{
    return x*x*x;
}

int main()
{
    //code;
    return 0;
}