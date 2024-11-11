#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rings: ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    vector <int> t[3];
    for (int i = n+1; i > 0; i--)
    {
        t[0].push_back(i);
    }
    return 0;
}