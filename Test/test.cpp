#include <iostream>
using namespace std;
int main()
{
    string s = "Hello World!";
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 10000; j++)
        {
            for (char k = '!'; k < '~'; k++)
            {
                cout << k << char(8);
            }
        }
        cout << "\033[31m" << s[i];
    }
    cout << endl;
    return 0;
}