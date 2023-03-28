#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* prv;
    node *next;
    node(int data)
    {
        this->data=data;
        this->prv=NULL;
        this->next=NULL;
    }
};
class Deque
{
    public:
    node *head;
    node *tail;
    int size;
    Deque()
    {
        head=NULL;
        tail=NULL;
        size=0;
    }
    void pushFront(int data)
    {
        node *newNode = new node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        node *temp= head;
        newNode->next=head;
        temp->prv=newNode;
        head=newNode;
        size++;
    }
    void pushBack(int data)
    {
        node *newNode = new node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        newNode->prv=tail;
        tail->next=newNode;
        tail=newNode;
        size++;
    }
    void travers()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<endl;
    }
};
int main()
{
    Deque dq;
    dq.pushFront(1);
    dq.pushFront(4);
    dq.pushBack(55);
    dq.pushFront(3);
    dq.travers();
    return 0;
}