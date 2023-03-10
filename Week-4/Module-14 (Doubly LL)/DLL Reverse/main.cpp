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
    void insertAtAnyPos(int data,int index)
    {
        if(index>size-1 || index<0)
        {
            cout<<"Invalid index"<<endl;
            return;
        }
        if(index==0)
        {
            insertAtHead(data);
        }
        else
        {
            
            node *a=head;
            int current_i=0;
            while(current_i!=index-1)
            {
                a=a->next;
                current_i++;
            }
            node *newNode= createNewNode(data);
            newNode->next=a->next;
            newNode->prv=a;
            node *b=a->next;
            b->prv=newNode;
            a->next=newNode;
            size++;
        }
    }
    void deletion(int indx)
    {
        if(indx>size)
        {
            cout<<"ERROr!!"<<endl;
            return;
        }
         node *a= head;
         int current_i=0;
         while(current_i!=indx)
        {
            a=a->next;
            current_i++;
        }
        node *b = a->prv;
        node *c = a->next;
       if(b!=NULL)
       {
         b->next=c;
       }
        if(c!=NULL)
        {
            c->prv=b;
        }
        delete a;
        if(indx==0)
        {
            head=c;
        }
        size--;
    }
    void reverse()
    {
        node *a = head;
        int current_i=0;
        while(current_i!=size-1)
        {
            a=a->next;
            current_i++;
        }
        node *b= head;
        while(b!=NULL)
        {
            swap(b->next,b->prv);
            b=b->prv;
        }
        head=a;
    }
};
int main()
{
    DoublyLinkedList dl;
    dl.insertAtHead(5);
    dl.insertAtHead(6);
    dl.insertAtHead(7);
    dl.insertAtAnyPos(33,2);
    dl.travers();
    dl.deletion(2);
    dl.travers();
    dl.reverse();
    dl.travers();
   // cout<<dl.getSize()<<endl;

}