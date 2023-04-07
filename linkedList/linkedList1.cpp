/*
Linked list
*/
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    Node *node = new Node(10);
    cout << node->data << endl;
    cout << node->next << endl;
    return 0;
}
