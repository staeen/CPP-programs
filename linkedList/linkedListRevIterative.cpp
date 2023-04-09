/*
Linked list
Insertion deletion and reversing iteratively
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
    ~Node()
    {
        int val = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory freed for node with value " << val << endl;
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

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        // deleting first or start node
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle or last node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
Node *reverseLinkedList(Node *head) // reversing linked list
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev; // returns a node
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
    cout << "Deleting some nodes " << endl;
    deleteNode(7, head);
    deleteNode(1, head);
    deleteNode(3, head);
    print(head);
    cout << "After reversing " << endl;
    Node *rev = reverseLinkedList(head);
    print(rev);
    return 0;
}
