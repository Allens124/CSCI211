#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string colors[8] = 
{
    "\033[30m" // black,
    "\033[31m" // red,
    "\033[32m" // green,
    "\033[33m" // yellow,
    "\033[34m" // blue,
    "\033[35m" // purple,
    "\033[36m" // cyan,
    "\033[37m" // white
};

void printMessage(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < 10000; j++)
        {
            for (char k = '!'; k < '~'; k++)
            {
                cout << k << char(8);
            }
        }
        cout << "\033[31m" << str[i];
    }
    cout << endl;
}

int main()
{
    string message;
    cout << "Enter a message: ";
    cin >> message;
    printMessage(message);
    return 0;
}