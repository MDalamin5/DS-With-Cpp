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
    void BFS(node *root)
    {
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            int l = -1;
            int r = -1;
            int p = -1;
            if (a->left != NULL)
            {
                l = a->left->nodeID;
                q.push(a->left);
            }
            if (a->right != NULL)
            {
                r = a->right->nodeID;
                q.push(a->right);
            }
            if (a->parent != NULL)
            {
                p = a->parent->nodeID;
            }
            cout<<"Node id: "<<a->nodeID<< " Parent ID: "<<p<<" Left Child: "<<l<<" Right Child: "<<r<<endl;
        }
    }
};
int main()
{
    BinaryTree bt;
    bt.createBT();
    bt.BFS(bt.root);
    cout << "Code is Not working" << endl;
    return 0;
}
