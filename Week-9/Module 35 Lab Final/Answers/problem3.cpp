#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *pvrs;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->pvrs = NULL;
    }
};
class LinkedList
{

public:
    node *head;
    node *tail;
    int sz;

    LinkedList()
    {
        head=NULL;
        tail=NULL;
        sz=0;
    }

    void insertHead(int data)
    {
        node *newNode = new node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            sz++;
            return;
        }
        
        node *a = head;
        newNode->next=a;
        a->pvrs=newNode;
        head=newNode;
        sz++;
    }
    void insertTail(int data)
    {
       node *newNode = new node(data);
        if(head==NULL)
        {
            tail=newNode;
            head=newNode;
            sz++;
            return;
        }
        tail->next=newNode;
        newNode->pvrs=tail;
        tail=newNode;
        sz++;
    }
    void insertMid(int data)
    {
        int mid = sz/2;
        if(mid==0)
        {
            insertHead(data);
            return;
        }
        else
        {
            node *a=head;
            int current_i=0;
            while(current_i!=mid-1)
            {
                a=a->next;
                current_i++;
            }
            node *newNode= new node(data);
            newNode->next=a->next;
            newNode->pvrs=a;
            node *b=a->next;
            b->pvrs=newNode;
            a->next=newNode;
            sz++;
        }
    }
    void print()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a= a->next;
        }
        cout<<endl;
    }
    int getSize()
    {
        return sz;
    }

    void merge(LinkedList a)
    {
        if(head==NULL || tail==NULL)
        {
            cout<<"Empty List First add some data on list";
            return;
        }
        tail->next=a.head;
        a.head->pvrs= tail;
        tail=a.tail;
        sz += a.getSize();
        
    }
};

int main()
{
    LinkedList a;
    LinkedList b;
    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
    a.print();
   

    b.insertHead(10);
	b.insertTail(50);
	b.insertMid(30);
	b.insertHead(9);
	b.insertTail(100);
    b.print(); // prints  9 10 30 50 100

    a.merge(b);
    a.print();
    b.print();

}