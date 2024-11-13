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

double linear(double x)
{
    return x;
}

double quadratic(double x)
{
    return x*x;
}

double cubic(double x)
{
    return x*x*x;
}

int main()
{
    cout << "The integral of f(x) = x between 1 and 5 is: " << integrate(line, 1, 5) << endl;
    return 0;
}