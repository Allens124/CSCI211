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
        void displayPoint()
        {
            cout << "(" << x << ", " << y << ", " << z << ")" << endl;
        }
};

int main()
{
    //code;
    return 0;
}