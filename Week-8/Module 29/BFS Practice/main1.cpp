#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *parent;
    node *left;
    node *right;
    int nodeId;
    node(int data, int nodeId)
    {
        this->data = data;
        this->nodeId = nodeId;
        this->left = NULL;
        this->right = NULL;
    }
};
int main()
{
    
    return 0;
}