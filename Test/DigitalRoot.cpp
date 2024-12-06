#include <iostream>
using namespace std;

string digitalRoot(string n)
{
    if (n.size() == 1)
    {
        return n;
    }
    int resultInt = 0;
    for (int i = 0; i < n.size(); i++)
    {
        resultInt += int(s[i]-'0');
    }
    string resultString = "";
    while (resultInt > 0)
    {
        resultString.insert(0, char(resultInt/10+'0'));
        resultInt /= 10;
    }
}

int main()
{
    //code;
    return 0;
}