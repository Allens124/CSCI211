#include <iostream>
using namespace std;

int magicSum(int cap)
{
    int sum = 0;
    for (int i = 1; i < cap+1; i++)
    {
        sum += i;
    }
    return sum/cap;
}

bool ok(int** s, int r, int cap)
{
    return true;
}

void print(int** s, int cap)
{

}

void magicSquare(int** s, int r, int cap)
{
    if (r == cap)
    {
        print(s);
    }
}

int main()
{
    int cap;
    cout << "How many rows and columns? ";
    cin >> cap;
    while (cap < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> cap;
    }
    int** s = new int*[cap];
    for (int i = 0; i < cap; i++)
    {
        s[i] = new int[cap];
    }
    magicSquare(s, 0, cap);
    for (int i = 0; i < cap; i++)
    {
        delete[] s[i];
    }
    delete[] s;
    return 0;
}