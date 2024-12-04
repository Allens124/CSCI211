#include <iostream>
using namespace std;

class Node
{
    protected:
        string data;
        Node* next;
    public:
        Node()
        {
            next = NULL;
        }
        Node(string s)
        {
            data = s;
            next = NULL;
        }
};

class LinkedList
{
    private:
        Node* first;
        Node* last;
        int length;
    public:
        LinkedList()
        {
            Node* ln = new Node();
            first = ln;
            last = ln;
            length = 0;
        }
        void append(string s)
        {
            Node* ln = new Node(s);
            (*ln).next = (*last).next;
            (*last).next = ln;
            last = ln;
            length++;
        }
};

int main()
{
    //code;
    return 0;
}