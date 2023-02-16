#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
class LinkedList
{
    public:
    node *head;
    int sz;

    LinkedList()
    {
        head=NULL;
        sz=0;
    }
    node *CreateNewNode(int data)
    {
        node *newNode = new node;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }
    void insertAtHead(int data)
    {
        
        node *a = CreateNewNode(data);
        if(head==NULL)
        {
            head=a;
            
        }
        else
        {
            a->next=head;
            head=a;
        }
        sz++;
    }
    void insertAtAnyIndex(int data,int index)
    {
        if(index<0 || index>sz)
        {
            cout<<"Your index is not valid sorry!!"<<endl;
            return;
        }
        if(index==0)
        {
            insertAtHead(data);
        }
        node *newNODE = CreateNewNode(data);
        node *a = head;
        int current_i=0;
        while(current_i!=index-1)
        {
            a=a->next;
            current_i++;
        }
        newNODE->next=a->next;
        a->next=newNODE;
    }
    void Travers()
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
    LinkedList l;
    l.insertAtHead(55);
    l.insertAtHead(65);
    l.insertAtHead(75);
    l.insertAtHead(85);
    l.Travers();
    l.insertAtAnyIndex(44,3);
    l.Travers();
    
    return 0;
}