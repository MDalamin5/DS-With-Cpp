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
    node* CreateNewNode(int data)
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
            head = a;
            return;
        }
        else
        {
            a->next=head;
            head = a;
        }
    }
 };
 int main()
 {
    LinkList l;
    
 }