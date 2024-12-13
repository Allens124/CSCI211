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
        friend istream& operator>>(istream& is, Complex& z);
};

Complex operator+(Complex x, Complex y)
{
    double reComp = x.getRe()+y.getRe();
    double imComp = x.getIm()+y.getIm();
    Complex z = Complex(reComp, imComp);
    return z;
}

Complex operator-(Complex x, Complex y)
{
    double reComp = x.getRe()-y.getRe();
    double imComp = x.getIm()-y.getIm();
    Complex z = Complex(reComp, imComp);
    return z;
}

Complex operator*(Complex x, Complex y)
{
    double reComp = x.getRe()*y.getRe()-x.getIm()*y.getIm();
    double imComp = x.getRe()*y.getIm()+x.getIm()*y.getRe();
    Complex z = Complex(reComp, imComp);
    return z;
}

int main()
{
    Complex z = Complex(3, 4);
    z.display();
    cout << endl;
    return 0;
}