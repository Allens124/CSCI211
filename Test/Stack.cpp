#include <iostream>
using namespace std;

template <typename T>

class Stack
{
    private:
        int top;
        T arr[100];
    public:
        Stack()
        {
            top = -1;
        }
        void push(T data)
        {
            top++;
            if (top == 100)
            {
                cout << "Stack overflow." << endl;
                return;
            }
            arr[top] = data;
        }
        void pushMore(T data[], int size)
        {
            for (int i = 0; i < size; i++)
            {
                top++;
                if (top == 100)
                {
                    cout << "Stack overflow." << endl;
                    return;
                }
                arr[top] = data[i];
            }
        }
        void pop()
        {
            if (top == -1)
            {
                cout << "Stack underflow." << endl;
                return;
            }
            cout << arr[top] << endl;
            top--;
        }
        void popMore(int count)
        {
            for (int i = 0; i < count; i++)
            {
                if (top == -1)
                {
                    cout << "Stack underflow." << endl;
                    return;
                }
                cout << arr[top] << endl;
                top--;
            }
        }
};

int main()
{
    Stack <string> stringStack;
    return 0;
}