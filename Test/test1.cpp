#include <iostream>
using namespace std;

int island[4][4] =
{
    {0, 1, 1, 0},
    {1, 0, 0, 1},
    {0, 0, 0, 0},
    {1, 1, 0, 0}
};

int main()
{
    int land[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == 0 || i == 5 || j == 0 || j == 5)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << island[i-1][j-1] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}