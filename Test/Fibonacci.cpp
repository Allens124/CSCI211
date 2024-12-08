#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n)
{
    static int term[50];
    if (n < 2)
    {
        
        return n;
    }
    if (term[n] != 0)
    {
        return term[n];
    }
    else
    {
        term[n] = fibonacci(n-1)+fibonacci(n-2);
        return term[n];
    }
}

int main()
{
    for (int i = 0; i < 20; i++)
    {
        cout << "f(" << i << ") = " << fibonacci(i) << endl;
    }
    return 0;
}