#include <iostream>
using namespace std;

template <typename T>

class Node
{
    public:
        string data;
        Node* next;
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
        void prepend(string s)
        {
            Node* ln = new Node(s);
            (*ln).next = (*first).next;
            (*first).next = ln;
            if (first == last)
            {
                last = ln;
            }
            length++;
        }
        void append(string s)
        {
            Node* ln = new Node(s);
            (*ln).next = (*last).next;
            (*last).next = ln;
            last = ln;
            length++;
        }
        void print()
        {
            Node* current = (*first).next;
            while (current != NULL)
            {
                cout << (*current).data << endl;
                current = (*current).next;
            }
        }
        int getLength()
        {
            return length;
        }
};

int main()
{
    LinkedList myList;
    myList.prepend("Martha");
    myList.append("Allen");
    myList.append("Zach");
    myList.prepend("Steven");
    myList.print();
    return 0;
}