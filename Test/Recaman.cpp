#include <iostream>
#include <vector>
using namespace std;

bool contains(vector <int> v, int n)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector <int> r(1);
    for (int i = 1; i < 30; i++)
    {
        if (contains(r, r[i-1]-i))
        {
            r.push_back(r[i-1]+i);
        }
        else
        {
            r.push_back(r[i-1]-i);
        }
    }
    return 0;
}