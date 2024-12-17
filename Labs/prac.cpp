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
    }
}

int main()
{
    //code;
    return 0;
}