#include <iostream>
using namespace std;

void modifyValue(int n)
{
    n += 10;
}

void modifyReference(int& n)
{
    n += 10;
}

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    modifyValue(n);
    cout << "The value of n after modifyValue(): " << n << endl;
    modifyReference(n);
    cout << "The value of n after modifyReference(): " << n << endl;
    return 0;
}