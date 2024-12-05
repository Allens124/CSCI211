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
    return 0;
}