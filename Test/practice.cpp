#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int r1 = 2+rand()%6;
    int r2 = 2+rand()%6;
    int b[r1][r2];
    string ans;
    
    cout << "b is a " << r1 << "-by-" << r2 << " integer array." << endl;
    cout << "The address of b is " << b << "." << endl;
    
    cout << "What is sizeof(b)? ";
    cin >> ans;
    cout << "Ans: " << sizeof(b) << endl;
    
    cout << "What is sizeof(b+0)? ";
    cin >> ans;
    cout << "Ans: " << sizeof(b+0) << endl;
    
    cout << "What is sizeof(*(b+0))? ";
    cin >> ans;
    cout << "Ans: " << sizeof(*(b+0)) << endl;
    
    cout << "What is b? ";
    cin >> ans;
    cout << "Ans: " << b << endl;
    
    cout << "What is b+1? ";
    cin >> ans;
    cout << "Ans: " << b+1 << endl;
    
    cout << "What is &b? ";
    cin >> ans;
    cout << "Ans: " << &b << endl;
    
    cout << "What is &b+1? ";
    cin >> ans;
    cout << "Ans: " << &b+1 << endl;
    
    return 0;
}