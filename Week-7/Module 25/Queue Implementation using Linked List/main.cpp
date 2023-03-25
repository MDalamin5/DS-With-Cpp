#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
class linkedList
{
    public:
    node *head;
    node *tail;
    int size;
    linkedList()
    {
        head=NULL;
        tail=NULL;
        size=0;
    }

    void enQueue(int data)
    {
        node *newNode = new node(data);
        if(head==NULL)
        {
            head = newNode;
            tail=newNode;
            size++;
            return;
        }
        tail->next=newNode;
        tail=newNode;
        size++;
    }
    void deQueue()
    {
        if(getSize()==0)
        {
            cout<<"Sir, Queue is Empty!"<<endl;
            return;
        }
        if(getSize()==1)
        {
             delete head;
             head=NULL;
             tail=NULL;
             size--;
             return;
        }
        node *a=head;
        head=a->next;
        delete a;
    }
    int top()
    {
        if(head==NULL)
        {
            cout<<"Sir, Queue is Empty!"<<endl;
            return -1;
        }
        return head->data;
    }
    void travers()
    {
        node *a= head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<endl;
    }
    int getSize()
    {
        return size;
    }
};
int main()
{
    linkedList l;
    l.enQueue(1);
   // l.enQueue(2);
    l.enQueue(3);
    //l.enQueue(4);
    l.travers();
    l.deQueue();
    l.travers();
    cout<<l.top()<<endl;
    cout<<l.getSize();
}