#include <iostream>
using namespace std;

int main()
{
    for (char c = 'a'; c <= 'z'; c++)
    {
        cout << c << char(8);
    }
    cout << "Hello World!" << endl;
    return 0;
}