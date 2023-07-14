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
class linkedList
{

public:
    node *head;
    node *tail;
    int sz;

    linkedList()
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
    
};

int main()
{
    linkedList a;
    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
    
}