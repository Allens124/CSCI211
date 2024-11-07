#include <iostream>
using namespace std;

int forSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int whileSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n;
        n--;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    cout << "Sum from 1 to " << n << " using a for loop: " << forSum(n) << endl;
    cout << "Sum from 1 to " << n << " using a while loop: " << whileSum(n) << endl;
    return 0;
}