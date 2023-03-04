#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node *prv;
    int data;
    node *nxt;
};
class doublyLinkedList
{
    public:
    node *head;
    int size;
    doublyLinkedList()
    {
        head=NULL;
        size=0;
    }
    node *createNewNode(int data)
    {
        node *newNode = new node;
        newNode->prv=NULL;
        newNode->data=data;
        newNode->nxt=NULL;
        return newNode;
    }
    void insertAtHead(int data)
    {
        node *a = createNewNode(data);
        if(head==NULL)
        {
            head=a;
            size++;
        }
        else
        {
            head->prv=a;
            a->nxt=head;
            head=a;
            size++;
        }
    }
    void travers()
    {
        node *a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<endl;
    }
};

int main()
{
    doublyLinkedList dl;
    dl.insertAtHead(10);
    dl.insertAtHead(20);
    dl.insertAtHead(30);
    dl.travers();
}