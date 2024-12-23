#include <iostream>
using namespace std;

template <typename T>

T add(T a, T b)
{
    return a+b;
}

int main()
{
    cout << add(2, 3) << endl;
    cout << add(3.14, 3.14) << endl;
    cout << add('H', 'i') << endl;
    return 0;
}