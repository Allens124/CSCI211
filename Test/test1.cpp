#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int size;
    cout << "Enter the sample size: ";
    cin >> size;
    while (size < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> size;
    }
    double sum = 0;
    double* unif = new double[size];
    for (int i = 0; i < size; i++)
    {
        *(unif+i) = 0.001*(rand()%1001);
        sum += *(unif+i);
        cout << i+1 << ": " << *(unif+i) << endl;
    }
    cout << "Average: " << sum/size << endl;
    delete[] unif;
    return 0;
}