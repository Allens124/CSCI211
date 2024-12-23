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

class LinkedList
{

};

int main()
{
    Node <int> link;
    return 0;
}