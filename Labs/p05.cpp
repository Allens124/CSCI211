#include <iostream>
using namespace std;
int main()
{
    int a[5], sum = 0;
    cout << "Enter five integers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << "Sum of elements in the array: " << sum << endl;
    return 0;
}