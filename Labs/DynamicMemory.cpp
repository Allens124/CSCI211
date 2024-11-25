#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of a 2D array: ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    return 0;
}