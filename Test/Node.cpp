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
            next = n;
        }
};

class LinkedList : public Node
{
    private:
        Node first;
        Node last;
        int length;
    public:
        LinkedList()
        {
            first = last;
            length = 0;
        }
};

int main()
{
    Node <int> link;
    return 0;
}