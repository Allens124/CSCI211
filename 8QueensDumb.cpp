#include <iostream>
#include <cmath>
using namespace std;

int solCount = 0;

bool ok(int b[])
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 8; j++)
        {
            if (b[i] == b[j] || j-i == abs(b[j]-b[i]))
            {
                return false;
            }
        }
    }
    return true;
}

void printBoard(int b[])
{
    cout << "Solution " << ++solCount << ":\n| ";
    for (int i = 0; i < 8; i++)
    {
        cout << b[i] << " | ";
    }
    cout << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (b[j] == i)
            {
                cout << "1"; 
            }
            else
            {
                cout << "0";
            }
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    int q[8] = {0};
    for (int c0 = 0; c0 < 8; c0++)
    {
        q[0] = c0;
        for (int c1 = 0; c1 < 8; c1++)
        {
            q[1] = c1;
            for (int c2 = 0; c2 < 8; c2++)
            {
                q[2] = c2;
                for (int c3 = 0; c3 < 8; c3++)
                {
                    q[3] = c3;
                    for (int c4 = 0; c4 < 8; c4++)
                    {
                        q[4] = c4;
                        for (int c5 = 0; c5 < 8; c5++)
                        {
                            q[5] = c5;
                            for (int c6 = 0; c6 < 8; c6++)
                            {
                                q[6] = c6;
                                for (int c7 = 0; c7 < 8; c7++)
                                {
                                    q[7] = c7;
                                    if (ok(q))
                                    {
                                        printBoard(q);
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