#include <iostream>
using namespace std;

class Point
{
    private:
        double x;
        double y;
        double z;
    public:
        Point()
        {
            x = 0;
            y = 0;
            z = 0;
        }
        Point(double xVal, double yVal, double zVal)
        {
            x = xVal;
            y = yVal;
            z = zVal;
        }
        double getX()
        {
            return x;
        }
        double getY()
        {
            return y;
        }
        double getZ()
        {
            return z;
        }
        void displayPoint()
        {
            cout << "(" << x << ", " << y << ", " << z << ")" << endl;
        }
};

Point operator*(double a, Point p)
{
    double xVal = a*p.getX();
    double yVal = a*p.getY();
    double zVal = a*p.getZ();
}

int main()
{
    //code;
    return 0;
}