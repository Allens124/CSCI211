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
        void dequeue(T data)
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
        }
        T front()
        {
            return arr[0];
        }
};

int main()
{
    //code;
    return 0;
}