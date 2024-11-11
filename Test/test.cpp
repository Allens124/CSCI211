#include <iostream>
using namespace std;

string colors[] = 
{
    
}

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