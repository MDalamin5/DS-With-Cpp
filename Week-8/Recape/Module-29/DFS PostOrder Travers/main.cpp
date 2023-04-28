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
    void createBT()
    {
        node *allNode[6];
        for (int i = 0; i < 6; i++)
            allNode[i] = new node(i);

        allNode[0]->left = allNode[1];
        allNode[0]->right = allNode[2];

        allNode[1]->left = allNode[5];
        allNode[1]->parent = allNode[0];

        allNode[2]->left = allNode[3];
        allNode[2]->right = allNode[4];
        allNode[2]->parent = allNode[0];

        allNode[5]->parent = allNode[1];
        allNode[3]->parent = allNode[2];
        allNode[4]->parent = allNode[2];

        root = allNode[0];
    }
    void DFSpostOrder(node *a)
    {
        if (a == NULL)
            return;
        DFSpostOrder(a->left);
        DFSpostOrder(a->right);
        cout << a->nodeID << " ";
    }
};
int main()
{
    BinaryTree bt;
    bt.createBT();
    bt.DFSpostOrder(bt.root);
    cout << endl;
    cout << "Code is Not working" << endl;
    return 0;
}
