#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(int data,node * &head)
{
    node *newNode= new node(data);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;

}
void insertAtTail(int data, node *&head)
{
    node *newNodeT= new node(data);
    node *temp=head;

    if(head==NULL)
    {
        head=newNodeT;
        return;
    }
    temp->next=newNodeT;

}
void display(node *head)
{
    node *a = head;
    while(a!=NULL)
    {
        cout<<a->data<<" ";
        a= a->next;
    }
    
}

int main()
{
    node *head = NULL;
    //insertAtHead(10,head);
    //insertAtHead(30,head);
    //display(head);
    insertAtTail(22,head);
    insertAtTail(23,head);
    insertAtTail(24,head);
    //cout<<head->data;
    //cout<<" "<<head->next->data<<endl;
    display(head);
    return 0;
}