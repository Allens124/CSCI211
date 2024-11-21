#include <iostream>
using namespace std;

// Define func as any function that takes in a double and returns a double
typedef double (*func)(double);

// Create a linear function that represents f(x) = x
double linear(double x)
{
    return x;
}

// Create a quadratic function that represents f(x) = x^2
double quadratic(double x)
{
    return x*x;
}

// Create a cubic function that represents f(x) = x^3
double cubic(double x)
{
    return x*x*x;
}

// Create an integrate function that takes in a function and two doubles
double integrate(func f, double a, double b)
{
    // Initialize an area variable to 0, which represents the cumulative area from a to b
    double area = 0;
    // Using a for loop, increment area by the 0.0001 times the function value to emulate Reimann sums
    for (double i = a; i < b; i += 0.0001)
    {
        area += 0.0001*f(i);
    }
    return area;
}

int main()
{
    cout << "The integral of f(x) = x between 1 and 5 is: " << integrate(linear, 1, 5) << endl;
    cout << "The integral of f(x) = x^2 between 1 and 5 is: " << integrate(quadratic, 1, 5) << endl;
    cout << "The integral of f(x) = x^3 between 1 and 5 is: " << integrate(cubic, 1, 5) << endl;
    return 0;
}