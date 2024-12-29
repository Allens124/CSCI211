#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int size;
    cout << "Enter the sample size: ";
    cin >> size;
    while (size < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> size;
    }
    return 0;
}