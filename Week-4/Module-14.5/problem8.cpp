#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node *prv;
    int data;
    node *next;
};

class doublyLinkedList
{
    public:
    node *head;
    int size;
    doublyLinkedList()
    {
        head=NULL;
        size=0;
    }
    node *createNewNode(int data)
    {
        node *newNode = new node;
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
            head= a;
            size++;
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
    void removeAtTail()
    {
        node *a= head;
        int current_i=0;
        while(current_i!=size-2)
        {
            a=a->next;
            current_i++;
        }
        node *b = a->next;
        a->next=NULL;
        delete b;
        size--;
    }
   
    void insertAtSpValue(int index,int data)
    {
        if(index==0)
        {
            insertAtHead(data);
        }
        node *a = head;
        int current_i=0;
        while(current_i!=index-1)
        {
            a=a->next;
            current_i++;
        }
        node *newNode=createNewNode(data);
        newNode->next=a->next;
        newNode->prv=a;
        a->next=newNode;
        size++;
    }
    void eraseDataFromDLL(int data)
    {
        node *a= head;
        int cur_index=0;
        while(a->data!=data)
        {
            
            a=a->next;
            cur_index++;
        }
        node *b=a->prv;
        node *c=a->next;
        if(c!=NULL)
        {
            b->next=c;
        }
        if(b!=NULL)
        {
            c->prv=b;
        }
        delete a;
        if(cur_index==0)
        {
            head=c;
        }
        size--;
        
    }
    bool isPalindrom()
    {
        bool flag= true;
        node *b=head;
        int cur_int= 0;
        while(cur_int!=size-1)
        {
            b=b->next;
            cur_int++;
        }
        node *a = head;
        while(a!=NULL && b!=NULL)
        {
            if(a->data!=b->data)
            {
                flag= false;
                break;
            }
            a=a->next;
            b=b->prv;
        }
        if(flag)
        {
            return true;
        }
        else
        return false;
       
    }
};
int main()
{
    doublyLinkedList dl;
    dl.insertAtHead(1);
    dl.insertAtHead(2);
    dl.insertAtHead(3);
    dl.insertAtHead(2);
    dl.insertAtHead(1);
    dl.travers();
    bool result = dl.isPalindrom();
    cout<<result;
    //dl.eraseDataFromDLL(2);
    //dl.travers();
   
}
