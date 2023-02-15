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
    node *createNewNode(int data)
    {
        node *newNode = new node;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }
    void insertAtHead(int data)
    {
        node *a= createNewNode(data);
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
        node *a=head;
        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;

        }
        cout<<"\n";
        
    }
    int searchValueIndex(int value)
    {
        node *a= head;
        int index=0;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            index++;
            a=a->next;
        }
        return -1;
    }
    void seacrAllIndex(int value)
    {
        node *a=head;
        int index=0;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                cout<<"Value fount and index num: "<<index<<"\n";
            }
            index++;
            a=a->next;
        }
        
    }
};
int main()
{
    LinkList l;
    l.insertAtHead(4);
    l.insertAtHead(44);
    l.insertAtHead(34);
    l.insertAtHead(4);
    l.travers();
    cout<<"INdex of the value is: "<<l.searchValueIndex(4)<<"\n";
    cout<<"INdex of the value is: "<<l.searchValueIndex(34)<<"\n";
    cout<<"INdex of the value is: "<<l.searchValueIndex(466)<<"\n";
    l.seacrAllIndex(4);
}
