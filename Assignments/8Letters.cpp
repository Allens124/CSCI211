#include <iostream>
using namespace std;

int solCount = 0;

char adj[8][5] =
{
    {'z'},
    {'a', 'z'},
    {'a', 'z'},
    {'a', 'b', 'c', 'z'},
    {'a', 'b', 'd', 'z'},
    {'b', 'e', 'z'},
    {'c', 'd', 'e', 'z'},
    {'d', 'e', 'f', 'g', 'z'}
};

void print(char b[])
{
    cout << " " << b[0] << b[1] << endl;
    cout << b[2] << b[3] << b[4] << b[5] << endl;
    cout << " " << b[6] << b[7] << endl;
}

bool ok(char b[], int c)
{
    for (int i = 0; i < c; i++)
    {
        if (b[i] == b[c])
        {
            return false;
        }
    }
}

int main()
{
    //code;
    return 0;
}