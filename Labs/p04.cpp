#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    while (n < 0)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    cout << n << "! = " << factorial(n) << endl;
    return 0;
}