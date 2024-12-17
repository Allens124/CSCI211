#include <iostream>
#include <vector>
using namespace std;

vector <int> merge(vector <int> a, vector <int> b)
{
    vector <int> c;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            c.push_back(a[i]);
        }
        else
        {
            c.push_back(b[j]);
        }
    }
    while (i == a.size() && j < b.size())
    {
        c.push_back(b[j]);
    }
}

int main()
{
    //code;
    return 0;
}