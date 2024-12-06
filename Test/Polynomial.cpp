#include <iostream>
#include <vector>
using namespace std;

string addPolynomials(vector <int> p, vector <int> q)
{
    int resultInt = 0;
    string resultString = "";
    for (int i = 0; i < p.size() || q.size(); i++)
    {
        resultInt = p[i]+q[i];
        while (resultInt > 0)
        {
            resultString += resultInt%10+'0';
            resultInt /= 10;
        }
        resultString += "x^";
        resultString += char(i+'0');
        resultString += " ";
    }
    return resultString;
}

int main()
{
    //code;
    return 0;
}