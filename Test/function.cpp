#include <iostream>
using namespace std;

typedef int (*FUNC)(int, int);

int add(int a, int b)
{
    return a+b;
}

int multiply(int a, int b)
{
    return a*b;
}

int main()
{
    FUNC f;
    f = add;
    return 0;
}