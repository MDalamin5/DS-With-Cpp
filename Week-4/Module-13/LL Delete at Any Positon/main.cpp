#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node *pre;
    int data;
    node *next;
};
class LinkedList
{
    public:
    node *head;
    LinkedList()
    {
        head=NULL;
    }

    node *createNewNode(int data)
    {
        node *newNode= new node;
        newNode->pre=NULL;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
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
    void insertAtHead(int data)
    {
        node *a = createNewNode(data);
        if(head==NULL)
        {
            head=a;
        }
        else
        {
           // node *temp = head;
            a->next=head;
            head->pre=a;
            head=a;
            //temp->pre=a;

        }
    }
    void insertAtAnyIndex(int data,int index)
    {
        if(index==0)
        {
            insertAtHead(data);
        }
        node *b = createNewNode(data);
        node *a=head;
        int current_i=0;
        while(current_i!=index-1)
        {
            a=a->next;
            current_i++;
        }
        
        b->next=a->next;
        a->next=b;
        a->next->pre=b;
        b->pre=a;
    }
    void eraseFromHead()
    {
        
    }
    void eraseData(int index)
    {
        if(index==0)
        {
            cout<<"YOu want to delet from Head but this function is not raddy....."<<endl;
        }
        int current_i=0;
        node *a = head;
        while(current_i!=index-1)
        {
            a=a->next;
            current_i++;
        }
        node *b=a->next;
        a->next=b->next;
        b->next->pre=a;
        delete b;
    }
};

int main()
{
    LinkedList l;
    l.insertAtHead(10);
    l.insertAtHead(22);
    l.insertAtHead(32);
    //cout<<l.head->data<<endl;
    //cout<<l.head->next->data<<endl;
    //cout<<l.head->next->pre->data<<endl;
    //cout<<l.head->next->next->pre->data<<endl;
    l.travers();
    l.insertAtAnyIndex(133,1);
    l.travers();
    l.eraseData(0);
    l.travers();
}