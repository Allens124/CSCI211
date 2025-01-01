#include <iostream>
#include <vector>
using namespace std;

vector <int> operator+(vector <int> a, vector <int> b)
{
    vector <int> result;
    for (int i = 0; i < a.size(); i++)
    {
        result.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        result.push_back(b[i]);
    }
}

int main()
{
    //code;
    return 0;
}