#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};

class linkedList
{
    public:
    node *head;
    int size;
    linkedList()
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
    void insertHead(int data)
    {
        node *a = createNewNode(data);
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
    void insertAtAnyIndex(int data,int index)
    {
        if(index>=size)
        return;
        node *a = head;
        int cur_indx=0;
        while(cur_indx!=index-1)
        {
            a=a->next;
            cur_indx++;
        }
        node *b =createNewNode(data);
        b->next=a->next;
        a->next=b;

    }
    void travers()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
            size++;
        }
    }
};
int main()
{
    linkedList l;
    l.insertHead(5);
    l.insertHead(6);
    l.insertHead(7);
    l.insertAtAnyIndex(55,1);
      l.travers();

}