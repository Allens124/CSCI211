#include <iostream>
using namespace std;

template <typename T>

class Node
{
    protected:
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
        Node(T d, Node n)
        {
            data = d;
            next = &n;
        }
};

int main()
{
    Node <int> link1 = Node <int>(5);
    Node <int> link2 = Node <int>(3, link1);
    Node <int> link3 = Node <int>(1, link2);
    return 0;
}