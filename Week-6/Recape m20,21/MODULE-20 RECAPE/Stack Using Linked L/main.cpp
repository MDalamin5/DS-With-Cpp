#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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

    void insertAtHead(int data)
    {
        node *a = new node(data);
        if(head==NULL)
        {
            head=a;
            size++;
        }
        else
        {
            a->next=head;
            head=a;
            size++;
        }
    }
    void eraseFromHead()
    {
        if(size==0)
        {
            cout<<"Stack is Empty!!"<<endl;
            return;
        }
        node *a = head->next;
        node *temp= head;
        if(a!=NULL)
        {
            a->prev=NULL;
        }
        head=a;
        delete temp;
        size--;
    }
    void travers()
    {
        if(head==NULL)
        {
            cout<<"Stack is Empty!!"<<endl;
            return;
        }
        node *a = head;
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

class Stack
{
    public:
    linkedList dll;
    Stack()
    {
        
    }
    void pushData(int data)
    {
        dll.insertAtHead(data);
    }
    void popData()
    {
        if(dll.getSize()==0)
        {
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        dll.eraseFromHead();
    }
    int topData()
    {
        if(dll.getSize()==0)
        {
            cout<<"Stack is Empty!"<<endl;
            return -1;
        }
        return dll.head->data;
    }

};
int main()
{
    /*
    linkedList dl;
    dl.insertAtHead(10);
    dl.insertAtHead(20);
    dl.insertAtHead(30);
    dl.travers();
    dl.eraseFromHead();
    dl.travers();
    dl.eraseFromHead();
    dl.travers();
    dl.eraseFromHead();
    dl.travers();
    cout<<dl.getSize();
    */
    
    Stack stk;
    stk.pushData(5);
    stk.pushData(4);
    stk.pushData(3);
    stk.pushData(2);
    stk.pushData(1);
    //stk.dll.travers();
    cout<<stk.topData()<<endl;
    stk.popData();
    cout<<stk.topData()<<endl;
    stk.popData();
    cout<<stk.topData()<<endl;
    stk.popData();
    cout<<stk.topData()<<endl;
    stk.popData();
    cout<<stk.topData()<<endl;
    stk.popData();
    cout<<stk.topData()<<endl;
}