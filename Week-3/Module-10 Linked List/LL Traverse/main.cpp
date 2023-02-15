#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};
class LinkList
{
    public:
    node *head;

    LinkList()
    {
        head=NULL;
    }

    node *CreateNewNode(int data)
    {
        node* newNode = new node;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }

    void addInsertAtHead(int data)
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
    }
    void traverse()
    {
        node *a= head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
};

int main()
{
    LinkList l;
    l.traverse();
    l.addInsertAtHead(5);
    l.traverse();
    l.addInsertAtHead(44);
    l.traverse();
    l.addInsertAtHead(34);
    l.traverse();
}