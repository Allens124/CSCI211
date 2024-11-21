#include <iostream>
using namespace std;



int main()
{
    int n;
    cout << "How many queens? ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    return 0;
}