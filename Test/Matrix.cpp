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
        Matrix(int r, int c)
        {
            rows = r;
            cols = c;
            arr = new T*[rows];
            for (int i = 0; i < rows; i++)
            {
                arr[i] = new T[cols];
            }
        }
        ~Matrix()
        {
            for (int i = 0; i < rows; i++)
            {
                delete[] arr[i];
            }
            delete[] arr;
        }
};

int main()
{
    Matrix <int> m;
    return 0;
}