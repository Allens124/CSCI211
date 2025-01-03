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

int minimum(int x, int y, int z)
{
    int min = x;
    if (y < min)
    {
        min = y;
    }
    if (z < min)
    {
        min = z;
    }
    return min;
}

int cost(int r, int c)
{
    if (r == -1)
    {
        r = 4;
    }
    if (c == 0)
    {
        return weight[r][0];
    }
    int up = cost((r-1)%5, c-1);
    int left = cost(r, c-1);
    int down = cost((r+1)%5, c-1);
    return minimum(up, left, down)+weight[r][c];
}

int main()
{
    int paths[5];
    for (int i = 0; i < 5; i++)
    {
        paths[i] = cost(i, 5);
        cout << paths[i] << endl;
    }
    int min = paths[0];
    for (int i = 1; i < 5; i++)
    {
        if (paths[i] < min)
        {
            min = paths[i];
        }
    }
    cout << "Length of the shortest path: " << min << endl;
    return 0;
}