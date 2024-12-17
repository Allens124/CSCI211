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
            c.push_back(a[i++]);
        }
        else
        {
            c.push_back(b[j++]);
        }
    }
    while (i == a.size() && j < b.size())
    {
        c.push_back(b[j++]);
    }
    while (i < a.size() && j == b.size())
    {
        c.push_back(a[i++]);
    }
    return c;
}

int main()
{
    int aSize, bSize, n;
    cout << "Enter the size of vector a: ";
    cin >> aSize;
    while (aSize < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> aSize;
    }
    return 0;
}