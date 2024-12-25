#include <iostream>
using namespace std;

template <typename T>

class Set
{
    private:
        int cap;
        T arr[100];
        bool elementOf(T data)
        {
            for (int i = 0; i < cap; i++)
            {
                if (arr[i] == data)
                {
                    return true;
                }
            }
            return false;
        }
        void bubbleSort()
        {
            bool swap = true;
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
                if (elementOf(a[i]))
                {
                    continue;
                }
                cap++;
                arr[cap] = a[i];
            }
            bubbleSort();
        }
        void add(T data)
        {
            if (cap == 99)
            {
                cout << "Set has reached maximum capacity." << endl;
                return;
            }
            if (elementOf(data))
            {
                return;
            }
            cap++;
            arr[cap] = data;
            bubbleSort();
        }
        void addMore(T a[], int size)
        {
            for (int i = 0; i < size; i++)
            {
                if (cap == 99)
                {
                    cout << "Set has reached maximum capacity." << endl;
                    return;
                }
                if (elementOf(a[i]))
                {
                    continue;
                }
                cap++;
                arr[cap] = a[i];
            }
            bubbleSort();
        }
        void print()
        {
            cout << "{";
            for (int i = 0; i < cap; i++)
            {
                cout << arr[i] << ", ";
            }
            cout << arr[cap] << "}" << endl;
        }
};

int main()
{
    int numbers[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    Set <int> s = Set<int>(numbers, 10);
    s.print();
    char letters[10] = {'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
    Set <char> c = Set<char>(letters, 10);
    c.print();
    return 0;
}