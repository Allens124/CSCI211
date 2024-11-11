#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> t[3];
    int n, to, from;
    cout << "Enter the number of rings: ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    for (int i = n+1; i > 0; i--)
    {
        t[0].push_back(i);
    }
    t[1].push_back(4);
    t[2].push_back(4);
    return 0;
}