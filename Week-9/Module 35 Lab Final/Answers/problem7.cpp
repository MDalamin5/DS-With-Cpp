#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int value;
    node* left;
    node* right;

    node(int value)
    {
        this->value=value;
        this->left=NULL;
        this->right=NULL;
    }
};


class BST{
public:
    node *root;
    BST()
    {
        //Write your code here
        root = NULL;
    }
    void Insert(int value)
    {
	//Write your code here

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
    bool Search(int value)
    {
        //Write your code here
         node *cur = root;
        while(cur!=NULL)
        {
            if(value>cur->value)
            {
                cur=cur->right;
            }
            else if(value<cur->value)
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
};
int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout<<bst.Search(10)<<"\n"; //1
    cout<<bst.Search(9)<<"\n"; //1
    cout<<bst.Search(20)<<"\n"; //1
    cout<<bst.Search(60)<<"\n"; //0
    return 0;
}
