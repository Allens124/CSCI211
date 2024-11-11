#include <iostream>
using namespace std;
int main()
{
    string s = "Hello";
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 10000; j++)
        {
            for (char c = 33; c < 127; c++)
            {
                cout << c << char(8);
            }
        }
        cout << s[i];
    }
    cout << endl;
    return 0;
}