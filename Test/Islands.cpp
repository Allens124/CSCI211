#include <iostream>
using namespace std;

int island[4][4] =
{
    {1, 0, 0, 1},
    {1, 1, 0, 1},
    {0, 0, 1, 1},
    {0, 0, 1, 0}
};

int islands()
{
    int islandCount = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 3 || j == 3)
            {
                if (i == 3 && j == 3 && island[i][j] == 1)
                {
                    islandCount++;
                }
                else if (i == 3 && island[i][j] == 1 && island[i][j+1] != 1)
                {
                    islandCount++;
                }
                else if (j == 3 && island[i][j] == 1 && island[i+1][j] != 1)
                {
                    islandCount++;
                }
            }
            else if (island[i][j] == 1 && island[i+1][j] != 1 && island[i][j+1] != 1)
            {
                islandCount++;
            }
        }
    }
    return islandCount;
}

int main()
{
    cout << islands() << endl;
    return 0;
}