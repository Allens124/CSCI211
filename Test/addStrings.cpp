#include <iostream>
#include <string>
using namespace std;

string addStrings(string a, string b)
{
    string result = "";
    int aLength = a.size()-1;
    int bLength = b.size()-1;
    bool carry = false;
    while (aLength > 0 || bLength > 0)
    {
        int aTemp = aLength < 0 ? a[aLength]-'0' : 0;
        int bTemp = bLength < 0 ? b[bLength]-'0' : 0;
        carry = aTemp+bTemp > 9;
        int digit = (aTemp+bTemp)%10;
    }
}

int main()
{
    //code;
    return 0;
}