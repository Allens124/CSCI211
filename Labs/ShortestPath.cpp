#include <iostream>
using namespace std;

int weight[5][6] =
{
    {3, 4, 1, 2, 8, 6},
    {6, 1, 8, 2, 7, 4},
    {5, 9, 3, 9, 9, 5},
    {8, 4, 1, 3, 2, 6},
    {3, 7, 2, 8, 6, 4}
};

int min(int x, int y, int z)
{
    int min = x;
    if (y < min)
    {
        y = min;
    }
    if (z < min)
    {
        z = min;
    }
    return min;
}

int cost(int r, int c)
{
    if (c == 0)
    {
        return weight[r][0];
    }
    int up;
    int left;
    int down;
}

int main()
{
    //code;
    return 0;
}