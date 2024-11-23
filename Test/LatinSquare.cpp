#include <iostream>
using namespace std;

int main()
{
    int cap;
    cout << "How many rows and columns? ";
    cin >> cap;
    if (cap < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> cap;
    }
    char c[cap];
    return 0;
}