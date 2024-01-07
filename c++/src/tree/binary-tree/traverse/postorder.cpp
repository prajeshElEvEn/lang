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

// LRN
void post_order_traversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    post_order_traversal(root->left);
    post_order_traversal(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;
    root = build_tree(root);

    post_order_traversal(root);
    return 0;
}