#include <iostream>
using namespace std;

int combination(int x, int y)
{
    if (x == 0 || y == 0)
    {
        return 1;
    }
    return combination(x-1, y)+combination(x, y-1);
}

int main()
{
    //code;
    return 0;
}