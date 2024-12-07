#include <iostream>
using namespace std;

string lexographical(string str)
{
    if (str.size() == 0)
    {
        return "a";
    }
    if (str[str.size()-1] == 'z')
    {
        return str+"a";
    }
}

int main()
{
    //code;
    return 0;
}