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
    int* unif = new int[size];
    for (int i = 0; i < size; i++)
    {
        *(unif+i) = rand()%1000;
    }
    delete[] unif;
    return 0;
}