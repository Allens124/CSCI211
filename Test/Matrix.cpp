#include <iostream>
using namespace std;

template <typename T>

class Matrix
{
    private:
        int rows;
        int cols;
        T arr[rows][cols];
};

int main()
{
    Matrix <int> m;
    return 0;
}