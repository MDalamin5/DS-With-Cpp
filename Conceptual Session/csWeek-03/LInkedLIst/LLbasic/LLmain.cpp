#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int value;
    node *next;
    node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};

void inserAtHead(node*&head,int value)
{
    node *newNode = new node(value);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;

    
}
void display(node *head)
{
    /*
    node *a=head;
    while(a!=NULL)
    {
        cout<<a->value<<" ";
        a=a->next;
    }
    */
   if(head->next==NULL)
   return;
   while(head!=NULL)
   {
    cout<<head->value<<" ";
    head=head->next;
   }
    
}
int main()
{
    //node *a = new node(10);
    //cout<<a->value<<endl;
    //node *b = new node(20);
    //node *c = new node(30);
    //node *d = new node(40);

    //a->next=b;
    //b->next=c;
    //c->next=d;
    //cout<<a->next->value<<" "<<a->next->next->value<<" "<<a->next->next->next->value<<endl;
    node* head=NULL;
    inserAtHead(head,10);
   // cout<<head->value<<endl;
    inserAtHead(head,33);
    inserAtHead(head,43);
    inserAtHead(head,53);
    inserAtHead(head,63);
    //cout<<head->value<<endl;
    //cout<<head->next->value<<endl;
    display(head);
}