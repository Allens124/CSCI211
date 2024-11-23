#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many rows and columns? ";
    cin >> n;
    if (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    return 0;
}