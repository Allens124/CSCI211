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
};

int main()
{
    //code;
    return 0;
}