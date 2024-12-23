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
        Stack(T data)
        {
            arr[++top] = data;
        }
};

int main()
{
    //code;
    return 0;
}