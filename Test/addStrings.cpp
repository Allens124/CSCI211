#include <iostream>
#include <string>
using namespace std;

string addStrings(string a, string b)
{
    int aLength = a.size()-1;
    int bLength = b.size()-1;
    while (aLength > 0 || bLength > 0)
    {
        int aTemp = aLength < 0 ? a[aLength]-'0' : 0;
        int bTemp = bLength < 0 ? b[bLength]-'0' : 0;
    }
}

int main()
{
    //code;
    return 0;
}