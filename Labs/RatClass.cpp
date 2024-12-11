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
            if (d == 0)
            {
                d = 1;
            }
            den = d;
        }
        void setNum(int n)
        {
            num = n;
        }
        void setDen(int d)
        {
            if (d == 0)
            {
                d = 1;
            }
            den = d;
        }
};

int main()
{
    //code;
    return 0;
}