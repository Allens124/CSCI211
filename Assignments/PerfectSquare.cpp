#include <iostream>
using namespace std;
int main()
{
    // Using a for loop, check the perfect squares between 0 and 99
    for (int i = 0; i < 100; i++)
    {
        // If the two last digits are odd, then output the number, and end the program
        if (i*i%2 == 1 && (i*i)/10%2)
        {
            cout << i << endl;
            return 0;
        }
    }
    // Output that no such number exists, and end the program
    cout << "No such number exists." << endl;
    return 0;
}