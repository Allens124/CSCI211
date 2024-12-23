#include <iostream>
using namespace std;

template <typename T>

class Queue
{
    private:
        int top;
        T arr[100];
    public:
        Queue()
        {
            top = -1;
        }
        void enqueue(T data)
        {
            if (top == 99)
            {
                cout << "Queue overflow." << endl;
                return;
            }
            top++;
            arr[top] = data;
        }
        void dequeue()
        {
            if (top == -1)
            {
                cout << "Queue underflow." << endl;
                return;
            }
            cout << arr[0] << endl;
            for (int i = 0; i < top; i++)
            {
                arr[i] = arr[i+1];
            }
            top--;
        }
        T front()
        {
            if (top == -1)
            {
                cout << "Queue is empty. Default return. ";
                return arr[0];
            }
            return arr[0];
        }
        T rear()
        {
            if (top == -1)
            {
                cout << "Queue is empty. Default return. ";
                return arr[0];
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
    Queue <string> intQueue;
    cout << intQueue.front() << endl;
    cout << intQueue.rear() << endl;
    return 0;
}