#include <iostream>
using namespace std;

template <typename T>

class Set
{
    private:
        int cap;
        T arr[100];
        void sort()
        {
            bool swap;
            while (swap)
            {
                swap = false;
                for (int i = 0; i < cap; i++)
                {
                    if (arr[i] > arr[i+1])
                    {
                        T temp = arr[i];
                        arr[i] = arr[i+1];
                        arr[i+1] = temp;
                        swap = true;
                    }
                }
            }
        }
};

int main()
{
    //code;
    return 0;
}