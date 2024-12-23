#include <iostream>
using namespace std;

template <typename T>

class Matrix
{
    private:
        int rows;
        int cols;
        T** arr;
    public:
        Matrix()
        {
            rows = 0;
            cols = 0;
        }
};

int main()
{
    Matrix <int> m;
    return 0;
}