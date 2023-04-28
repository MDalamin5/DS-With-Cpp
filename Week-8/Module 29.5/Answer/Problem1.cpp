#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int nodeID;
    int data;
    node *left;
    node *right;
    node *parent;

    node(int nodeID, int data)
    {
        this->nodeID = nodeID;
        this->data = data;
        this->left = NULL;
        this->right = NULL;
        this->parent = NULL;
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
    void insertData(int nodeID, int data)
    {
        node *newNode = new node(nodeID, data);
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
                newNode->parent = a;
                return;
            }
            if (a->right != NULL)
            {
                q.push(a->right);
            }
            else
            {
                a->right = newNode;
                newNode->parent = a;
                return;
            }
        }
    }
    void SearchData(node *a, int data)
    {
        if (a == NULL)
            return;
        if (a->data == data)
        {
            cout << a->nodeID << " " << a->data << endl;
        }
        SearchData(a->left, data);
        SearchData(a->right, data);
    }
};
int main()
{
    BinaryTree bt;
    bt.insertData(0, 10);
    
}