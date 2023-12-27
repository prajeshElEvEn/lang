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

int main()
{

    return 0;
}