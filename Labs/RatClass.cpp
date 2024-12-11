#include <iostream>
using namespace std;

class Rat
{
    private:
        int num;
        int den;
    public:
        Rat()
        {
            num = 0;
            den = 1;
        }
        Rat(int n)
        {
            num = n;
            den = 1;
        }
        Rat(int n, int d)
        {
            num = n;
            den = d;
        }
};

int main()
{
    //code;
    return 0;
}