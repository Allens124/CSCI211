#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        cout << "No command-line arguments passed." << endl;
        return 0;
    }
    cout << "Number of command-line arguments: " << argc << endl;
    return 0;
}