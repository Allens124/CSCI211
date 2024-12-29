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
        friend ostream& operator<<(ostream& os, Complex z);
        friend istream& operator>>(istream& is, Complex z);
};

Complex operator+(Complex x, Complex y)
{
    double reComp = x.getRe()+y.getRe();
    double imComp = x.getIm()+y.getIm();
    return Complex(reComp, imComp);
}

Complex operator-(Complex x, Complex y)
{
    double reComp = x.getRe()-y.getRe();
    double imComp = x.getIm()-y.getIm();
    return Complex(reComp, imComp);
}

Complex operator*(Complex x, Complex y)
{
    double reComp = x.getRe()*y.getRe()-x.getIm()*y.getIm();
    double imComp = x.getRe()*y.getIm()+x.getIm()*y.getRe();
    return Complex(reComp, imComp);
}

Complex operator/(Complex x, Complex y)
{
    double reComp = (x.getRe()*y.getRe()+x.getIm()*y.getIm())/(y.getRe()*y.getRe()+y.getIm()*y.getIm());
    double imComp = (x.getIm()*y.getRe()-x.getRe()*y.getIm())/(y.getRe()*y.getRe()+y.getIm()*y.getIm());
    return Complex(reComp, imComp);
}

ostream& operator<<(ostream& os, Complex z)
{
    if (z.im > -1)
    {
        os << z.re << " + " << z.im << "i";
        return os;
    }
    else
    {
        os << z.re << " - " << -z.im << "i";
        return os;
    }
}

istream& operator>>(istream& is, Complex z)
{
    is >> z.re >> z.im;
    return is;
}

int main()
{
    Complex z1 = Complex(2, 0);
    Complex z2 = Complex(1, -1);
    cout << z1 << endl;
    cout << z2 << endl;
    cout << z1+z2 << endl;
    cout << z1-z2 << endl;
    cout << z1*z2 << endl;
    cout << z1/z2 << endl;
    return 0;
}