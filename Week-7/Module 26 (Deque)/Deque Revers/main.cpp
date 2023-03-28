#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *prv;
    node *next;

    node(int data)
    {
        this->data=data;
        this->prv=NULL;
        this->next=NULL;
    }
};
class linkedList
{
    public:
    node *head;
    node *tail;
    int size;
    int reves;
    linkedList()
    {
        head=NULL;
        tail=NULL;
        size=0;
        reves=0;
    }
    void insertAtTail(int data)
    {
        node *newNode = new node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        tail->next=newNode;
        newNode->prv=tail;
        tail=newNode;
        size++;
    }
    void pushBack(int data)
    {
        if(reves==0)
        {
            insertAtTail(data);
        }
        else
        {
            insertAtHead(data);
        }
    }
    void insertAtHead(int data)
    {
        node *newNode = new node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        node *a =head;
        newNode->next=head;
        a->prv=newNode;
        head=newNode;
        size++;
    }
    
    void pushFront(int data)
    {
        if(reves==0)
        {
            insertAtHead(data);
        }
        else
        {
            insertAtTail(data);
        }
    }
    void eraseAtTail()
    {
         if(getSize()==0)
        {
            cout<<"Deque is Empty"<<endl;
            return;
        }
        if(size==1)
        {
            delete tail;
            head=tail=NULL;
            size--;
            return;
        }
        node *temp = tail;
        tail=temp->prv;
        tail->next=NULL;
        size--;
        delete temp;
    }
    void popBack()
    {
       if(reves==0)
       {
        eraseAtTail();
       }
       else
       {
        eraseAtHead();
       }
    }
    void eraseAtHead()
    {
        if(getSize()==0)
        {
            cout<<"Deque is Empty"<<endl;
            return;
        }
        if(size==0)
        {
            delete tail;
            head=tail=NULL;
            size--;
            return;
        }
        node *temp = head;
        head=temp->next;
        head->prv=NULL;
        delete temp;
        size--;
    }
    void popFront()
    {
        if(reves==0)
        {
            eraseAtHead();
        }
        else
        {
            eraseAtTail();
        }
    }

    int front()
    {
        if(getSize()==0)
        {
            cout<<"Your Deque is Empty!!!"<<endl;
            return -1;
        }
        return head->data;
    }
    int back()
    {
         if(getSize()==0)
        {
            cout<<"Your Deque is Empty!!!"<<endl;
            return -1;
        }
        return tail->data;
    }
    void travers()
    {
        
        node *a=head;
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
   void reversDeque()
   {
    if(reves==0)
    {
        reves=1;
    }
    else
    {
        reves=0;
    }
   }
};
int main()
{
    linkedList dq;
    dq.pushBack(1);
    dq.pushBack(2);
    dq.pushBack(3);
    dq.reversDeque();
    dq.pushBack(4);
    dq.reversDeque();
    dq.pushBack(5);
    dq.pushBack(6);
    dq.pushFront(55);
    
    dq.travers();
    dq.popBack();
    dq.travers();
    dq.popFront();
    dq.travers();
    cout<<dq.getSize()<<endl;
    cout<<"Top Value is: "<<dq.front()<<endl;
    cout<<"Back Value is: "<<dq.back()<<endl;
}