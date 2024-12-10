#include <iostream>
#include <cmath>
using namespace std;

class Time
{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time()
        {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        Time(int h, int m, int s)
        {
            hours = abs(h)%24;
            minutes = abs(m)%60;
            seconds = abs(s)%60;
        }
        int getHours()
        {
            return hours;
        }
        int getMinutes()
        {
            return minutes;
        }
        int getSeconds()
        {
            return seconds;
        }
        void displayTime()
        {
            if (hours < 10)
            {
                cout << "0";
            }
            cout << hours << ":";
            if (minutes < 10)
            {
                cout << "0";
            }
            cout << minutes << ":";
            if (seconds < 10)
            {
                cout << "0";
            }
            cout << seconds;
        }
};

Time operator+(Time t1, Time t2)
{
    int s = t1.getSeconds()+t2.getSeconds();
    int m = t1.getMinutes()+t2.getMinutes();
    if (s > 59)
    {
        m++;
    }
    int h = t1.getHours()+t2.getHours();
    if (m > 59)
    {
        h++;
    }
    Time t = Time(h, m, s);
    return t;
}

Time operator-(Time t1, Time t2)
{
    int s = t1.getSeconds()-t2.getSeconds();
    int m = t1.getMinutes()-t2.getMinutes();
    if (s < 0)
    {
        m--;
    }
    int h = t1.getHours()+t2.getHours();
    if (m < 0)
    {
        h--;
    }
    Time t = Time(h, m, s);
    return t;
}

int main()
{
    //code;
    return 0;
}