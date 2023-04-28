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

    }
    void DFSinorder(node *a)
    {
        if (a == NULL)
            return;
        DFSinorder(a->left);
        cout << a->nodeID << " ";
        DFSinorder(a->right);
    }
};
int main()
{
    BinaryTree bt;
    bt.DFSinorder(bt.root);
    cout << endl;
    cout << "Code is Not working" << endl;
    return 0;
}
