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
    // Using a for loop, dynamically allocate memory to each row of the 2D array
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    // Using a nested for loop, fill each element of the 2D array with fill
    for (int i = 0; i < n*n; i++)
    {
        *(*(arr)+i) = n*n-i;
    }
    // Using a nested for loop, output each element of the 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(*(arr+i)+j) << "\t";
        }
        cout << "\n";
    }
    // Using a for loop, release memory from each row of the 2D array
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    // Release the memory from the 2D array
    delete[] arr;
    return 0;
}