#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    int id;
    node *per;
    node *left;
    node *right;
    node(int id,int data)
    {
        this->id=id;
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
    void inserstNode(int id, int data)
    {
        node *newNode = new node(id,data);
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

    void search(node *a, int value)
    {
        if(a==NULL)
        {
            return;
        }
        if(a->data==value)
        {
            cout<<a->id<<" ";
        }
        search(a->left,value);
        search(a->right,value);
    }
};
int main()
{
    BinaryTree bt;
    bt.inserstNode(0,5);
    bt.inserstNode(1,10);
    bt.inserstNode(2,10);
    bt.inserstNode(3,9);
    bt.inserstNode(4,8);
    bt.inserstNode(5,5);
    bt.inserstNode(6,7);
   // bt.DFSpreOrder(bt.root);
   bt.search(bt.root, 5);
   cout<<endl;
   bt.search(bt.root,10);
}
