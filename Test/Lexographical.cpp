#include <iostream>
using namespace std;

string lexographical(string str)
{
    if (str.size() == 0)
    {
        return "a";
    }
    for (int i = str.size()-1; i > -1; i++)
    {
        if (str[i] != 'z')
        {
            str[i] = str[i]++;
            return str;
        }
    }
}

int main()
{
    //code;
    return 0;
}