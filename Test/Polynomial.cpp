#include <iostream>
using namespace std;

class Polynomial
{
    private:
        double function[100];
    public:
        Polynomial()
        {
            for (int i = 0; i < 100; i++)
            {
                function[i] = 0;
            }
        }
        void setCoefficient(int power, double coefficient)
        {
            if (power < 0 || power > 99)
            {
                cout << "Invalid power." << endl;
                return;
            }
            function[power] = coefficient;
        }
        double getCoefficient(int power)
        {
            if (power < 0 || power > 99)
            {
                return 0;
            }
            return function[power];
        }
        int degree()
        {
            int degree = 0;
            for (int i = 1; i < 100; i++)
            {
                if (function[i] != 0)
                {
                    degree = i;
                }
            }
            return degree;
        }
        friend ostream& operator<<(ostream& os, Polynomial p);
};

ostream& operator<<(ostream& os, Polynomial p)
{
    for (int i = 0; i < 100; i++)
    {
        if (p.function[i] > 0)
        {
            os << "+ " << p.function[i] << "x^" << i << " ";
        }
        else if (p.function[i] < 0)
        {
            os << "- " << -1*p.function[i] << "x^" << i << " ";
        }
    }
    return os;
}

Polynomial operator+(Polynomial p, Polynomial q)
{
    Polynomial r;
    for (int i = 0; i < 100; i++)
    {
        r.setCoefficient(i, p.getCoefficient(i)+q.getCoefficient(i));
    }
    return r;
}

Polynomial operator-(Polynomial p, Polynomial q)
{
    Polynomial r;
    for (int i = 0; i < 100; i++)
    {
        r.setCoefficient(i, p.getCoefficient(i)-q.getCoefficient(i));
    }
    return r;
}

int main()
{
    Polynomial p, q;
    p.setCoefficient(3, -5);
    q.setCoefficient(12, -5);
    cout << p << " + " << q << " = " << p+q << endl;
    cout << p << " - " << q << " = " << p-q << endl;
    return 0;
}