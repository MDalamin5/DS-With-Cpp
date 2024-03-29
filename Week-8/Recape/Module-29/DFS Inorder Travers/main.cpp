#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int nodeID;
    node *left;
    node *right;
    node *parent;
    // int data;
    node(int nodeID)
    {
        this->nodeID = nodeID;
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
    void insetNode(int nodeID)
    {
        node *newNode = new node(nodeID);
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
    void BSFtravers(node *a)
    {
        if(a==NULL)
        {
            return;
        }
        cout<<a->nodeID<<" ";
        BSFtravers(a->left);
        BSFtravers(a->right);
    }
};
int main()
{
    BinaryTree bt;
    bt.insetNode(0);
    bt.insetNode(1);
    bt.insetNode(2);
    bt.insetNode(3);
    bt.insetNode(4);
    bt.insetNode(5);
    bt.insetNode(6);
    bt.BSFtravers(bt.root);
    cout << endl;
    cout << "Code is Not working" << endl;
    return 0;
}
