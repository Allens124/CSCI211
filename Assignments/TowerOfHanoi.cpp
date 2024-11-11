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
    
    return 0;
}