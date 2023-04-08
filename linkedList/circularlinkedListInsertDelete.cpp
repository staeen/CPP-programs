/*
Linked list
circular linked list
Insertion and deletion
*/
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory freed for node with data " << val << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        // assuming that the element is present in the list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "list is empty " << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int val)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty, Check again " << endl;
        return;
    }
    else
    {
        // non empty
        // assuming value is present in linked list
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != val)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // for one node linked list
        if (curr == prev)
        {
            tail = NULL;
        }
        // greater than equal to 2 node
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3); // insert into empty list
    insertNode(tail, 3, 5);
    /*insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);
    insertNode(tail, 5, 6);
    insertNode(tail, 9, 10);
    insertNode(tail, 3, 4);*/
    print(tail);
    cout << "Deleting some nodes " << endl;
    /*deleteNode(tail, 10);
    deleteNode(tail, 6);*/
    deleteNode(tail, 3);
    print(tail);
    return 0;
}
