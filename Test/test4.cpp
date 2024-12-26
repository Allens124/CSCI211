#include <iostream>
using namespace std;

void a();

void b();

void c();

int main()
{
    //code;
    return 0;
}

void a()
{
    b();
}

void b()
{
    c();
}

void c()
{
    cout << "Hello World!" << endl;
}