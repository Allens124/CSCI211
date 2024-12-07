#include <iostream>
using namespace std;

string lexographical(string str)
{
    if (str.size() == 0)
    {
        return "a";
    }
    for (int i = str.size()-1; i > -1; i--)
    {
        if (str[i] != 'z')
        {
            str[i] = char(str[i]+1);
            return str;
        }
    }
    return str+"a";
}

int main()
{
    cout << lexographical("geeks") << endl;
    cout << lexographical("raavz") << endl;
    cout << lexographical("zzz") << endl;
    return 0;
}