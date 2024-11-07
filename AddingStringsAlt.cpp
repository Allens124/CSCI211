#include <iostream>
#include <string>
using namespace std;

int toInt(string s)
{
    string digits[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    for (int i = 0; i < 10; i++)
    {
        if (s == digits[i])
        {
            return i;
        }
    }
    return 0;
}

string toString(int n)
{
    string digits[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    for (int i = 0; i < 10; i++)
    {
        if (n == i)
        {
            return digits[i];
        }
    }
    return "0";
}

string add(string a, string b)
{
    if (a.size() < b.size())
    {
        string c = a;
        a = b;
        b = c;
    }
    while (b.size() < a.size())
    {
        b = "0"+b;
    }
    int x, y;
    bool carry = false;
    string sum = "", total = "";
    for (int i = 0; i < a.size(); i++)
    {
        x = toInt(a.substr(a.size()-i-1, 1));
        y = toInt(b.substr(a.size()-i-1, 1));
        if (carry)
        {
            x += 1;
        }
        if (x+y < 10)
        {
            carry = false;
        }
        else
        {
            carry = true;
        }
        sum = toString((x+y)%10);
        total = sum+total;
    }
    if (carry)
    {
        return "1"+total;
    }
    return total;
}

int main()
{
    string a, b;
    cout << "Enter a positive integer: ";
    cin >> a;
    cout << "Enter another positive integer: ";
    cin >> b;
    cout << "The sum of a and b is: " << add(a, b) << endl;
    return 0;
}