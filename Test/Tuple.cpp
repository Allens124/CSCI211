#include <iostream>
using namespace std;

template <typename S, typename T>

class Tuple
{
    private:
        S data1;
        T data2;
    public:
        Tuple()
        {

        }
        Tuple(S d1, T d2)
        {
            data1 = d1;
            data2 = d2;
        }
        void setData1(S d)
        {
            data1 = d;
        }
        void setData2(S d)
        {
            data2 = d;
        }
        S getData1()
        {
            return data1;
        }
        T getData2()
        {
            return data2;
        }
};

int main()
{
    Tuple <int, char> myTuple = Tuple<int, char>(10, 'A');
    cout << myTuple.getData1() << endl;
    cout << myTuple.getData2() << endl;
    return 0;
}