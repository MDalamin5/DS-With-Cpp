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
    void insertAtAnyPos(int data,int index)
    {
        if(index>=size)
        {
            cout<<"Out of Bound Index...."<<endl;
            return;
        }
        node *a=head;
        int cur_int=0;
        while(cur_int!=index-1)
        {
            a=a->nxt;
            cur_int++;
        }
        node *b=a->nxt;
        node *newNode= createNewNode(data);
        newNode->nxt=a->nxt;
        b->prv=newNode;
        a->nxt=newNode;
        newNode->prv= a;
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
    dl.insertAtAnyPos(55,1);
    dl.travers();
}