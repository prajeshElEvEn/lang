#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *build_tree(node *root)
{
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    root->left = build_tree(root->left);
    root->right = build_tree(root->right);
    return root;
}

void reverse_level_order_traversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    stack<int> s;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        s.push(temp->data);
        if (temp->right)
        {
            q.push(temp->right);
        }
        if (temp->left)
        {
            q.push(temp->left);
        }
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    node *root = NULL;
    root = build_tree(root);

    reverse_level_order_traversal(root);
    return 0;
}