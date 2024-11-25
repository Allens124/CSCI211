#include <iostream>
using namespace std;
int main()
{
    // Declare an integer that stores the size of an n*n array
    int n;
    // Prompt the user to enter the size of the n*n array
    cout << "Enter the size of a 2D array: ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    int fill = n*n;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = fill--;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}