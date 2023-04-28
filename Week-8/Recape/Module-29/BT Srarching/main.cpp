#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int nodeID;
    node *left;
    node *right;
    node *parent;
    int data;
    node(int nodeID, int data)
    {
        this->nodeID = nodeID;
        this->left = NULL;
        this->right = NULL;
        this->parent = NULL;
        this->data = data;
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
    void insetNode(int nodeID, int data)
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
    void BSFtravers(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->nodeID << " ";
        BSFtravers(a->left);
        BSFtravers(a->right);
    }
    void searchingData(node *a, int data)
    {
        if(a==NULL)
        return;
        if(a->data==data)
        {
            cout<<a->nodeID<<" "<<a->data<<endl;
        }
        searchingData(a->left,data);
        searchingData(a->right,data);
    }
};
int main()
{
    BinaryTree bt;
    bt.insetNode(0, 5);
    bt.insetNode(1, 10);
    bt.insetNode(2, 10);
    bt.insetNode(3, 9);
    bt.insetNode(4, 8);
    bt.insetNode(5, 5);
    bt.insetNode(6, 7);
    bt.BSFtravers(bt.root);
    cout << endl;
    bt.searchingData(bt.root, 10);
    cout << "Code is Not working" << endl;
    return 0;
}
