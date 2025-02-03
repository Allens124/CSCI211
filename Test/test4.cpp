#include <iostream>
using namespace std;

int power(double base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return base*power(base, exp-1);
}

int main()
{
    cout << power(1, 10) << endl;
    cout << power(2, 10) << endl;
    cout << power(3, 5) << endl;
    cout << power(9, 3) << endl;
    cout << power(7, 3) << endl;
    return 0;
}