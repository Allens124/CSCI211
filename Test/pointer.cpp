#include <iostream>
using namespace std;
int main()
{
    int i = 20;
    int* ip = &i;
    cout << "Address of i: " << &i << endl;
    cout << "Address of *ip: " << &ip << endl;
    cout << "*ip: " << *ip << endl;
    cout << "&*ip: " << &*ip << endl;
    cout << "*&*ip: " << *&*ip << endl;
    return 0;
}