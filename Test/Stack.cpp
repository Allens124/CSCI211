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
            if (top == 99)
            {
                cout << "Stack overflow." << endl;
                return;
            }
            top++;
            arr[top] = data;
        }
        void pushMore(T data[], int size)
        {
            for (int i = 0; i < size; i++)
            {
                if (top == 99)
                {
                    cout << "Stack overflow." << endl;
                    return;
                }
                top++;
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
        T getTop()
        {
            if (top == -1)
            {
                cout << "Stack is empty." << endl;
                return T();
            }
            return arr[top];
        }
        bool isEmpty()
        {
            return top == -1;
        }
        bool isFull()
        {
            return top == 99;
        }
};

int main()
{
    Stack <char> myStack;
    myStack.getTop();
    return 0;
}