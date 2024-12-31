#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double* rUnif(int n, int min = 0, int max = 1)
{
    if (n < 1)
    {
        n = 100;
    }
    if (max < min)
    {
        double temp = max;
        max = min;
        min = temp;
    }
    srand(time(0));
    static double sample[n];
    for (int i = 0; i < n; i++)
    {
        sample[i] = 0.001*(rand()%(1000*(max-min)+1))+min;
    }
    return sample;
}

int main()
{
    double* unifSample = rUnif(100, 0, 1);
    for (int i = 0; i < 100; i++)
    {
        cout << i+1 << ": " << unifSample[i] << endl;
    }
    return 0;
}