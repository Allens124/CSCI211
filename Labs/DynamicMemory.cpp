#include <iostream>
using namespace std;
int main()
{
    // Declare an integer that stores the size of an n*n array
    int n;
    // Prompt the user to enter the size of the n*n array
    cout << "Enter the size of a 2D array: ";
    cin >> n;
    // While n is invalid, continue to prompt the user 
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    // Declare and dynamically allocate memory to a 2D array
    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    // Declare an integer that stores the first value to be stored in the n*n array
    int fill = n*n;
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