#include <iostream>
using namespace std;

class Time
{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time(int h, int m, int s)
        {
            hours = h%24;
            minutes = m%60;
            seconds = s%60;
        }
};

Time overload+(Time t1, Time t2)
{
    //code;
}

Time overload-(Time t1, Time t2)
{
    //code;
}

int main()
{
    //code;
    return 0;
}