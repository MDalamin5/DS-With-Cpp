#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *per;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
        this->per = NULL;
    }
};
class BinaryTree
{
public:
    node *root;
    BinaryTree()
    {
        root = NULL;
    }
    void inserstNode(int data)
    {
        node *newNode = new node(data);
        if (root == NULL)
        {
            root = newNode;
            return;
        }
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            if (a->left != NULL)
            {
                q.push(a->left);
            }
            else
            {
                a->left = newNode;
                newNode->per = a;
                return;
            }
            if (a->right != NULL)
            {
                q.push(a->right);
            }
            else
            {
                a->right = newNode;
                newNode->per = a;
                return;
            }
        }
    }

    void DFSpreOrder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->data << " ";
        DFSpreOrder(a->left);
        DFSpreOrder(a->right);
    }
};
int main()
{
    BinaryTree bt;
    bt.inserstNode(0);
    bt.inserstNode(1);
    bt.inserstNode(2);
    bt.inserstNode(3);
    bt.inserstNode(4);
    bt.inserstNode(5);
    bt.DFSpreOrder(bt.root);
}
