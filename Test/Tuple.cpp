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
};

int main()
{
    //code;
    return 0;
}