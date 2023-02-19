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
    void insertAtTail(int data)
    {
        node *a = createNewNode(data);
        if(head==NULL)
        {
            head=a;
        }
        node *b= head;
        while(b->next->next!=NULL)
        {
            b=b->next;
        }
        b->next->next=a;
    }
    void printExazectValue(int value)
    {
       node *a = head;
       bool flag = false;
       while(a!=NULL)
       {
            if(a->data==value)
            {
                flag=true;
                break;
            }
            a=a->next;
       }
       if(flag)
       {
        cout<<"True";
       }
       else
       {
        cout<<"Not Found";
       }
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
   // l.printIthIndexvalue(2);
    l.insertAtTail(0);
    l.printExazectValue(3);
    //l.travers();
}