#include <iostream>
using namespace std;

void clear()
{
    for (int i = 0; i < 9; i++)
    {
        cout << char(8);
    }
}

void frame1()
{
    for (int i = 0; i < 9; i++)
    {
        cout << "*";
        for (int j = 0; j < 10000; j++);
    }
}

void frame2()
{
    //code;
}

int main()
{
    //code;
    return 0;
}