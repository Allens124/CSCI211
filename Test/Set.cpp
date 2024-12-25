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
    public:
        Set()
        {
            cap = -1;
        }
        Set(T a[], int size)
        {
            cap = -1;
            for (int i = 0; i < size; i++)
            {
                if (cap == 99)
                {
                    cout << "Set has reached maximum capacity." << endl;
                    break;
                }
                cap++;
                arr[cap] = a[i];
            }
            sort();
        }
        void add(T data)
        {
            if (cap == 99)
            {
                cout << "Set has reached maximum capacity." << endl;
                return;
            }
            cap++;
            arr[cap] = data;
            sort();
        }
        void addMore(T data[], int size)
        {
            for (int i = 0; i < size; i++)
            {
                if (cap == 99)
                {
                    cout << "Set has reached maximum capacity." << endl;
                    return;
                }
                cap++;
                arr[cap] = data[i];
            }
            sort();
        }
};

int main()
{
    //code;
    return 0;
}