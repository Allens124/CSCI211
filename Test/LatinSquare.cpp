#include <iostream>
using namespace std;

bool ok(char b[], int c, int cap)
{
    return true;
}

void print(char b[], int cap)
{

}

void latinSquare(char b[], int c, int cap)
{
    if (c == cap)
    {
        print(b, cap);
        return;
    }
    for (char i = 'A'; i < 'A'+cap; i++)
    {
        
    }
}

int main()
{
    int cap;
    cout << "How many rows and columns? ";
    cin >> cap;
    if (cap < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> cap;
    }
    char c[cap];
    return 0;
}