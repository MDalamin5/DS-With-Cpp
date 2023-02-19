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
    int size;
    LinkedList()
    {
        head=NULL;
        size=0;
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
        size++;
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
    void eraseAtHead()
    {
        size--;
        node *a=head;
        head=a->next;
        delete a;
    }
    void eraseAtTail()
    {
        node *a = head;
        while(a->next->next!=NULL)
        {
           a=a->next;
        }
        size--;
        node *b= a->next;
        a->next=b->next;
        delete b;
    }
    void printIthIndexvalue(int index)
    {
        if(index>size-1)
        {
            return;
        }
        node *a = head;
        int current_i=0;
        while(current_i!=index)
        {
            a=a->next;
            current_i++;
        }
        cout<<a->data<<" "<<endl;
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
    //l.eraseAtHead();
    //l.eraseAtTail();
    l.printIthIndexvalue(2);
    //l.travers();
}