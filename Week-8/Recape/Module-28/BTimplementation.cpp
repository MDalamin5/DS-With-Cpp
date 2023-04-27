#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int nodeID;
    node *left;
    node *right;
    node *parent;
    //int data;
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
    node *allNode[6];
    BinaryTree()
    {
        root = NULL;
    }
    void createBT()
    {
        for (int i = 0; i < 6; i++)
            allNode[i] = new node(i);
            
            allNode[0]->left=allNode[1];
            allNode[0]->right=allNode[2];
            
            allNode[1]->left=allNode[5];
            allNode[1]->parent=allNode[0];

            allNode[2]->left=allNode[3];
            allNode[2]->right=allNode[4];
            allNode[2]->parent=allNode[0];

            allNode[5]->parent=allNode[1];
            allNode[3]->parent=allNode[2];
            allNode[4]->parent=allNode[2];
            
            root = allNode[0];
    }
    void printTree(node* root)
    {
        for(int i=0;i<6;i++)
        {
            int r=-1;
            int l=-1;
            int p=-1;
            if(allNode[i]->parent!=NULL)
            {
                p=allNode[i]->parent->nodeID;
            }
            if(allNode[i]->left!=NULL)
            {
                l=allNode[i]->left->nodeID;
            }
            if(allNode[i]->right!=NULL)
            {
                r=allNode[i]->right->nodeID;
            }

            cout<<"Parent id: "<<p<<" Left child: "<<l<<" Right child: "<<r<<endl;
        }
    }
};
int main()
{
    BinaryTree bt;
    bt.createBT();
    bt.printTree(bt.root);
    cout << "Code is Not working" << endl;
    return 0;
}
