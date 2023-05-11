#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
class BinarySearchTree
{
public:
    node *root;
    BinarySearchTree()
    {
        root=NULL;
    }
    void BSF()
    {

    }
    void addData(int data)
    {
        node *newNode = new node (data);
        if(root==NULL)
        {
            root=newNode;
            return;
        }
        node *cur = root;
        node *prnt = NULL;

        while(cur!=NULL)
        {
            if(newNode->data>cur->data)
            {
                prnt=cur;
                cur=cur->right;
            }
            else
            {
                prnt=cur;
                cur=cur->left;
            }
        }
        if(newNode->data>prnt->data)
        {
            prnt->right=newNode;
            
        }
        else
        {
            prnt->left=newNode;
            
        }
    }

    void BFStravers()
    {
        if(root==NULL)
        {
            cout<<"BST is Empty....."<<endl;
            return;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node *temp = q.front();
            q.pop();
            int l=-1;
            int r=-1;
            if(temp->left!=NULL)
            {
                l=temp->left->data;
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                r=temp->right->data;
                q.push(temp->right);
            }
            cout<<"Node value: "<<temp->data<<" Left child: "<<l
                  <<" Right child: "<<r<<endl;
        }
    }
    bool searchData(int data)
    {
        node *cur = root;
        while(cur!=NULL)
        {
            if(data>cur->data)
            {
                cur=cur->right;
            }
            else if(data<cur->data)
            {
                cur=cur->left;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
    void deleteData(int data)
    {
        
    }
};
int main()
{
    BinarySearchTree bst;
    bst.addData(6);
    bst.addData(4);
    bst.addData(3);
    bst.addData(5);
    bst.addData(7);
    bst.addData(8);
    bst.BFStravers();
}