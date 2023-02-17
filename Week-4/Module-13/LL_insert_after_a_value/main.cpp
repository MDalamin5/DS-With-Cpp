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
    LinkedList()
    {
        head=NULL;
    }
    node *createAnewNode(int data)
    {
        node *newNode = new node;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }
    void inserAtHead(int data)
    {
        node *a = createAnewNode(data);
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
            cout<<a->data<<" ";;
            a=a->next;
        }
        cout<<endl;
    }
    void addDataAfterAvalue(int sp_value,int data)
    {
        node *a=head;
        
        while(a!=NULL)
        {
            if(a->data==sp_value)
            {
                break;
            }
            a=a->next;
        }
       if(a!=NULL)
       {
         node *newB = createAnewNode(data);
        newB->next=a->next;
        a->next=newB;
       }
       else
       {
        cout<<"YOUr data not found!"<<"\n";
        return;
       }
    }
};
int main()
{
    LinkedList l;
    l.inserAtHead(10);
    l.inserAtHead(23);
    l.inserAtHead(25);
    l.inserAtHead(26);
    l.travers();
    l.addDataAfterAvalue(45,99);
    l.travers();
   
}