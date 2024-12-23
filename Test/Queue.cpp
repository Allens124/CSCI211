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
            
        }
};

int main()
{
    //code;
    return 0;
}