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
    //code;
    return 0;
}