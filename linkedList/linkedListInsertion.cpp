/*
Linked list
Insertion at an position
*/
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data) // default constructor
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d) // insertion at head
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d) // insertion at tail
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1) // insert at start
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node = new Node(11); // linked list with 10 at head
    Node *head = node;
    Node *tail = node;
    print(head);
    insertAtTail(tail, 12); // insert 12 at tail
    print(head);
    insertAtTail(tail, 18); // insert 18 at tail
    print(head);
    insertAtTail(tail, 34);
    print(head);
    insertAtPosition(tail, head, 4, 24);
    print(head);
    insertAtPosition(tail, head, 1, 10);
    print(head);
    insertAtPosition(tail, head, 7, 43);
    print(head);
    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;
    return 0;
}
