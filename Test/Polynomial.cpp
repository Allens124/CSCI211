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
        friend ostream& operator<<(ostream& os, Polynomial p);
};

ostream& operator<<(ostream& os, Polynomial p)
{
    for (int i = 0; i < 100; i++)
    {
        if (p.function[i] > 0)
        {
            os << "+" << p.function[i] << "x^" << i << " ";
        }
        else if (p.function[i] < 0)
        {
            os << "-" << -1*p.function[i] << "x^" << i << " ";
        }
    }
    return os;
}

int main()
{
    Polynomial p;
    p.setCoefficient(3, -5);
    cout << p << endl;
    return 0;
}