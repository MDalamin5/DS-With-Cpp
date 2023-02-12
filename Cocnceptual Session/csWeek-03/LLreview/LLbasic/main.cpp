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
 void insertAtHead(int data, node*&head)
 {
    node *newNode = new node(data);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }
 }
 void Display(node *head)
 {
    node *a = head;
    while(a!=NULL)
    {
        cout<<a->data<<" ";
        a=a->next;
    }
 }

int main()
{
    
    node* head=NULL;
    insertAtHead(10,head);
    //cout<<head->data<<"\n";
    insertAtHead(20,head);
    //cout<<head->data<<endl;
   // cout<<head->next->data<<endl;
    Display(head);
}