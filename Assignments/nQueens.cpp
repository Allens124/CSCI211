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
    for (int i = 0; i < n+1; i++)
    {
        int* q[] = new int[i];
    }
    return 0;
}