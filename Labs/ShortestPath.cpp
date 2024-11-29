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

int cost(int r, int c)
{
    if (c == 0)
    {
        return weight[r][0];
    }
    int up = cost((r-1)%5, c-1)+weight[r][c];
    int left = cost(r, c-1)+weight[r][c];
    int down = cost((r+1)%5, c-1)+weight[r][c];
    int min = up;
    if (left < min)
    {
        left = min;
    }
    if (down < min)
    {
        down = min;
    }
    return min;
}

int main()
{
    int paths[5];
    for (int i = 0; i < 5; i++)
    {
        paths[i] = cost(i, 5);
    }

    return 0;
}