#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node *prv;
    int data;
    node *next;
};
class DoublyLinkedList
{
    public:
    node *head;
    int size;
    DoublyLinkedList()
    {
        head = NULL;
        size=0;
    }
    node *createNewNode(int data)
    {
        node *newNode= new node;
        newNode->prv=NULL;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }
    void insertAtHead(int data)
    {
        node *a= createNewNode(data);
        if(head==NULL)
        {
            head=a;
            size++;
            return; 
        }
        else
        {
            a->next=head;
            head->prv=a;
            head=a;
            size++;
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
    int getSize()
    {
        return size;
    }
};
int main()
{
    DoublyLinkedList dl;
    dl.insertAtHead(5);
    dl.insertAtHead(6);
    dl.insertAtHead(7);
    dl.travers();
    cout<<dl.getSize()<<endl;

}