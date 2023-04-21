#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *per;
    node *left;
    node *right;
    int nodeId;
    node(int data)
    {
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
    node *allNode[6];
    BinaryTree()
    {
        root = NULL;
    }
    void createAllNode()
    {
        for (int i = 0; i < 6; i++)
        {
            allNode[i] = new node(i);
        }

        allNode[0]->left = allNode[1];
        allNode[0]->right = allNode[2];

        allNode[1]->left = allNode[5];
        allNode[1]->per = allNode[0];

        allNode[2]->left = allNode[3];
        allNode[2]->right = allNode[4];
        allNode[2]->per = allNode[0];

        allNode[5]->per = allNode[1];
        allNode[3]->per = allNode[2];
        allNode[4]->per = allNode[2];

        root = allNode[0];
    }
    void treeInfo()
    {
        for (int i = 0; i < 6; i++)
        {
            int p = -1;
            int l = -1;
            int r = -1;
            if (allNode[i]->per != NULL)
            {
                p = allNode[i]->per->data;
            }
            if (allNode[i]->left != NULL)
            {
                l = allNode[i]->left->data;
            }
            if (allNode[i]->right != NULL)
            {
                r = allNode[i]->right->data;
            }

            cout<<"Node "<<i<< " Parent= "<<p<<" Left child: "<<l<<" Right child: "<<r<<endl;
        }
    }
};
int main()
{
    BinaryTree bt;
    bt.createAllNode();
    bt.treeInfo();
}
