#include <iostream>
using namespace std;

void clear()
{
    for (int i = 0; i < 9; i++)
    {
        cout << char(8);
        for (int j = 0; j < 10000; j++);
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
    frame1();
    clear();
    cout << endl;
    return 0;
}