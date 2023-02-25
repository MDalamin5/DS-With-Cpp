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
    void findIthIndexValue(int index)
    {
        node *a = head;
        int cur_indx=0;
        while(cur_indx!=index-1)
        {
            a=a->next;
            cur_indx++;
        }
        cout<<a->data<<endl;
    }
};
int main()
{
    doublyLinkedList dl;
    dl.insertAtHead(5);
    dl.insertAtHead(4);
    dl.insertAtHead(3);
    dl.insertAtHead(2);
    dl.insertAtHead(1);
    dl.findIthIndexValue(2);
    dl.travers();
    
}
