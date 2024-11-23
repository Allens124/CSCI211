#include <iostream>
using namespace std;

void clear()
{
    for (int i = 0; i < 10; i++)
    {
        cout << char(8);
    }
}

void frame()
{
    for (int i = 0; i < 10; i++)
    {
        cout << '*';
    }
}

int main()
{
    frame();
    clear();
    cout << endl;
    return 0;
}