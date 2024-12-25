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
        Set(T data[], int size)
        {
            cap = -1;
            for (int i = 0; i < size; i++)
            {
                if (cap == 99)
                {
                    cout << "Set has reached maximum capacity." << endl;
                    break;
                }
                if (elementOf(data[i]))
                {
                    continue;
                }
                cap++;
                arr[cap] = data[i];
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
        void addMore(T data[], int size)
        {
            for (int i = 0; i < size; i++)
            {
                if (cap == 99)
                {
                    cout << "Set has reached maximum capacity." << endl;
                    return;
                }
                if (elementOf(data[i]))
                {
                    continue;
                }
                cap++;
                arr[cap] = data[i];
            }
            bubbleSort();
        }
        friend ostream& operator<<(ostream& os, Set <T> s);
};

ostream& operator<<(ostream& os, Set <int> s)
{
    os << "{";
    for (int i = 0; i < s.cap; i++)
    {
        os << s.arr[i] << ", ";
    }
    os << s.arr[s.cap] << "}";
    return os;
}

ostream& operator<<(ostream& os, Set <char> s)
{
    os << "{";
    for (int i = 0; i < s.cap; i++)
    {
        os << s.arr[i] << ", ";
    }
    os << s.arr[s.cap] << "}";
    return os;
}

int main()
{
    int numbers[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    Set <int> s = Set<int>(numbers, 10);
    cout << s << endl;
    char letters[10] = {'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
    Set <char> c = Set<char>(letters, 10);
    cout << c << endl;
    return 0;
}