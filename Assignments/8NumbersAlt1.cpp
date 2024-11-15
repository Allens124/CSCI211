#include <iostream>
#include <cmath>
using namespace std;

int solCount = 0;

int adj[8][5] = 
{
    {-1}, 
    {0, -1}, 
    {0, -1}, 
    {0, 1, 2, -1}, 
    {0, 1, 3, -1}, 
    {1, 4, -1}, 
    {2, 3, 4, -1}, 
    {3, 4, 5, 6, -1}
};

bool ok(int arr[])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 8; j++)
        {
            if (arr[i] == arr[j])
            {
                return false;
            }
        }
        for (int j = 0; adj[i][j] != -1; j++)
        {
            if (abs(arr[i]-arr[adj[i][j]]) == 1)
            {
                return false;
            }
        }
    }
    return true;
}

void print(int arr[])
{
    cout << "Solution " << ++solCount << ":" << endl;
    cout << " " << cross[0] << cross[1] << endl;
    cout << cross[2] << cross[3] << cross[4] << cross[5] << endl;
    cout << " " << cross[6] << cross[7] << endl;
}

int main()
{
    int b[8];
    for (int i0 = 1; i0 < 9; i0++)
    {
        b[0] = i0;
        for (int i1 = 1; i1 < 9; i1++)
        {
            b[1] = i1;
            for (int i2 = 1; i2 < 9; i2++)
            {
                b[2] = i2;
                for (int i3 = 1; i3 < 9; i3++)
                {
                    b[3] = i3;
                    for (int i4 = 1; i4 < 9; i4++)
                    {
                        b[4] = i4;
                        for (int i5 = 1; i5 < 9; i5++)
                        {
                            b[5] = i5;
                            for (int i6 = 1; i6 < 9; i6++)
                            {
                                b[6] = i6;
                                for (int i7 = 1; i7 < 9; i7++)
                                {
                                    b[7] = i7;
                                    if (ok(b))
                                    {
                                        print(b);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}