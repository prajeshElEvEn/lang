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

void insert(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // create a node
    Node *node1 = new Node(10);

    // create head and assign first node to it
    Node *head = node1;
    print(head);

    insert(head, 11);
    print(head);
    insert(head, 12);
    print(head);

    return 0;
}