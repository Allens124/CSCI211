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
        resultInt += int(n[i]-'0');
    }
    string resultString = "";
    while (resultInt > 0)
    {
        resultString += char(resultInt%10+'0');
        resultInt /= 10;
    }
    return digitalRoot(resultString);
}

int main()
{
    cout << digitalRoot("1234") << endl;
    cout << digitalRoot("5678") << endl;
    cout << digitalRoot("314159") << endl;
    return 0;
}