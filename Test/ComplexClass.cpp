#include <iostream>
using namespace std;

class Complex
{
    private:
        double re;
        double im;
    public:
        Complex()
        {
            re = 0;
            im = 0;
        }
        Complex(double a, double b)
        {
            re = a;
            im = b;
        }
        void setRe(double a)
        {
            re = a;
        }
        void setIm(double b)
        {
            im = b;
        }
        double getRe()
        {
            return re;
        }
        double getIm()
        {
            return im;
        } 
};

int main()
{
    //code;
    return 0;
}