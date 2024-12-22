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
        Point(double a, double b, double c)
        {
            x = a;
            y = b;
            z = c;
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
        friend ostream& operator<<(ostream& os, Point p);
};

ostream& operator<<(ostream& os, Point p)
{
    os << "(" << p.x << ", " << p.y << ", " << p.z << ")";
    return os;
}

Point operator*(double a, Point p)
{
    double xVal = a*p.getX();
    double yVal = a*p.getY();
    double zVal = a*p.getZ();
    Point q = Point(xVal, yVal, zVal);
    return q;
}

int main()
{
    Point a;
    cout << a << endl;
    Point b = Point(2.3, 1.8, 7);
    cout << b << endl;
    Point c = 3*b;
    cout << c << endl;
    return 0;
}