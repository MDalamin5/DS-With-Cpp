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
    LinkedList()
    {
        head=NULL;
    }
    node *createNewNode(int data)
    {
        node *newNode= new node;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }
    void insertAtHead(int data)
    {
        node *a=createNewNode(data);
        if(head==NULL)
        {
            head=a;
        }
        else
        {
            a->next=head;
            head=a;
        }
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
    LinkedList l;
    l.insertAtHead(5);
    l.insertAtHead(4);
    l.insertAtHead(3);
    l.insertAtHead(2);
    l.insertAtHead(1);
    l.insertAtHead(0);
    l.travers();
}