#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *left;
    node *right;
    node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};
class BST
{
public:
    node *root;
    BST()
    {
        root = NULL;
    }
    void BFStravers()
    {
        if(root==NULL)
        return;
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *temp = q.front();
            q.pop();
            int l = -1;
            int r = -1;
            if (temp->left != NULL)
            {
                l = temp->left->value;
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                r = temp->right->value;
                q.push(temp->right);
            }
            cout << "Node Value: " << temp->value << " "
                 << "Left Child: " << l << " "
                 << "Right child: " << r<<endl; 
        }
    }
    void BSTinsert(int value)
    {
        node *newNode = new node(value);
        if(root==NULL)
        {
            root=newNode;
            return;
        }
        node *cur=root;
        node *prv=NULL;
        while(cur!=NULL)
        {
            if(newNode->value>cur->value)
            {
                prv=cur;
                cur=cur->right;
                
            }
            else
            {
                prv=cur;
                cur=cur->left;
                
            }
        }
        if(newNode->value>prv->value)
        {
            prv->right=newNode;
            
        }
        else
        {
            prv->left=newNode;
           
        }
    }
};
int main()
{
    BST bst;
    bst.BSTinsert(6);
    bst.BSTinsert(4);
    bst.BSTinsert(3);
    bst.BSTinsert(5);
    bst.BSTinsert(7);
    bst.BSTinsert(8);

    bst.BFStravers();
    return 0;
}