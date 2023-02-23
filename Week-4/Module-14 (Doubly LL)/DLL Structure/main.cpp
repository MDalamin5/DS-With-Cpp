#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node *prv;
    int data;
    node *next;
};
class DoublyLinkedList
{
    node *head;
    DoublyLinkedList()
    {
        head = NULL;
    }
    node *createNewNode(int data)
    {
        node *newNode= new node;
        newNode->prv=NULL;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }
    
};
int main()
{
    return 0;
}