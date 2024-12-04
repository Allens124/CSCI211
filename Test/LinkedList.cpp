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

int main()
{
    //code;
    return 0;
}