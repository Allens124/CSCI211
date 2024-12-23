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
};

int main()
{
    Stack <int> p;
    p.push(3);
    p.push(2);
    p.push(1);
    p.pop();
    p.pop();
    p.pop();
    return 0;
}