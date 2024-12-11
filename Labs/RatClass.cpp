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
        int getNum()
        {
            return num;
        }
        int getDen()
        {
            return den;
        }
        void display()
        {
            cout << num << "/" << den;
        }
};

Rat operator+(Rat x, Rat y)
{
    int n = x.getNum()*y.getDen()+y.getNum()*x.getDen();
    int d = x.getDen()*y.getDen();
    Rat z = Rat(n, d);
    return z;
}

Rat operator-(Rat x, Rat y)
{
    int n = x.getNum()*y.getDen()-y.getNum()*x.getDen();
    int d = x.getDen()*y.getDen();
    Rat z = Rat(n, d);
    return z;
}

int main()
{
    //code;
    return 0;
}