#include <iostream>
#include <cmath>
using namespace std;

bool ok(int q[])
{
    return true; // delete this line for configuration of part 3
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if (q[i] == q[j] || abs(q[i] - q[j]) == j-i)
            {
                return false;
            }
        }
    }
    return true;
}

void print(int q[], int sol)
{
    cout << "Configuration " << sol << ": ";
    for (int i = 0; i < 4; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main()
{
    int q[4];
    int count = 0;
    for (int i0 = 0; i0 < 4; i0++)
    {
        for (int i1 = 0; i1 < 4; i1++)
        {
            for (int i2 = 0; i2 < 4; i2++)
            {
                for (int i3 = 0; i3 < 4; i3++)
                {
                    q[0] = i0;
                    q[1] = i1;
                    q[2] = i2;
                    q[3] = i3;
                    if (ok(q))
                    {
                        print(q, ++count);
                    }
                }
            }
        }
    }
    return 0;
}