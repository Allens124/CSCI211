#include <iostream>
#include <cmath>
using namespace std; 

class Fraction
{
    private:
        int numerator;
        int denominator;

// Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
        int gcd(int a, int b)
        {
	        if (a%b == 0)
            {
                return b;
            }
            return gcd(b, a%b);
	    }

    public:
        Fraction(int num, int den)
        {
            numerator = num;
            denominator = den;
            simplify();
        }   
    
        int getNumerator() const
        {
            return numerator;
        }

        int getDenominator() const
        {
            return denominator;
        }
	    
        void simplify()
        {
            int commonDivisor = gcd(abs(numerator), abs(denominator)); // Calculate GCD using absolute values
            numerator /= commonDivisor;
            denominator /= commonDivisor;
            
            // Apply negative sign to the numerator if the fraction is originally negative
            if ((numerator < 0 && denominator > 0) || (numerator > 0 && denominator < 0))
            {
                numerator = -abs(numerator);
            }
            else
            {
                numerator = abs(numerator);
            }
            denominator = abs(denominator);
        }
};

Fraction operator+(const Fraction& f1, const Fraction& f2)
{
    int num = f1.getNumerator() * f2.getDenominator() + f2.getNumerator() * f1.getDenominator();
    int den = f1.getDenominator() * f2.getDenominator();
    return Fraction(num, den);
}

Fraction operator-(const Fraction& f1, const Fraction& f2)
{
    int num = f1.getNumerator() * f2.getDenominator() - f2.getNumerator() * f1.getDenominator();
    int den = f1.getDenominator() * f2.getDenominator();
    return Fraction(num, den);
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
    int num = f1.getNumerator() * f2.getNumerator();
    int den = f1.getDenominator() * f2.getDenominator();
    return Fraction(num, den);
}

Fraction operator/(const Fraction& f1, const Fraction& f2)
{
    int num = f1.getNumerator() * f2.getDenominator();
    int den = f1.getDenominator() * f2.getNumerator();
    return Fraction(num, den);
}

void display(const Fraction& f)
{
    cout << "Fraction: " << f.getNumerator() << "/" << f.getDenominator() << endl;
}


int main()
{
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction result_add = f1 + f2;
    Fraction result_sub = f1 - f2;
    Fraction result_mul = f1 * f2;
    Fraction result_div = f1 / f2;

    display(result_add); // Output: Fraction: 5/4
    display(result_sub); // Output: Fraction: -1/4
    display(result_mul); // Output: Fraction: 3/8
    display(result_div); // Output: Fraction: 2/3

    return 0;
}

