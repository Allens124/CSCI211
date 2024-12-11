#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    if (a%b == 0)
    {
        return b;
    }
    return gcd(b, a%b);
}

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
        void simplify()
        {
            int div = gcd(abs(num), abs(den));
            num /= div;
            den /= div;
            if (num*den < 0)
            {
                num = -abs(num);
            }
            else
            {
                num = abs(num);
            }
            den = abs(den);
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

Rat operator*(Rat x, Rat y)
{
    int n = x.getNum()*y.getNum();
    int d = x.getDen()*y.getDen();
    Rat z = Rat(n, d);
    return z;
}

Rat operator/(Rat x, Rat y)
{
    int n = x.getNum()*y.getDen();
    int d = x.getDen()*y.getNum();
    Rat z = Rat(n, d);
    return z;
}

int main()
{
    Rat x = Rat(1, 2);
    Rat y = Rat(7, 8);
    Rat z = Rat();
    z = x+y;
    z.display();
    cout << endl;
    z = x-y;
    z.display();
    cout << endl;
    z = x*y;
    z.display();
    cout << endl;
    z = x/y;
    z.display();
    cout << endl;
    return 0;
}