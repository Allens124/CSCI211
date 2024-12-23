#include <iostream>
using namespace std;

template <typename T>

class Node
{
    private:
        T data;
        Node* next;
    public:
        Node()
        {
            next = NULL;
        }
        Node(T d)
        {
            data = d;
            next = NULL;
        }
};

int main()
{
    Node <int> link;
    return 0;
}