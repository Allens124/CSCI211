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
    int size, n;
    vector <int> a, b, c;
    cout << "Enter the size of vector a: ";
    cin >> size;
    while (size < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> size;
    }
    cout << "Enter the elements of vector a: ";
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        a.push_back(n);
    }
    cout << "Enter the size of vector b: ";
    cin >> size;
    while (size < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> size;
    }
    cout << "Enter the elements of vector b: ";
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        b.push_back(n);
    }
    c = merge(a, b);
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}