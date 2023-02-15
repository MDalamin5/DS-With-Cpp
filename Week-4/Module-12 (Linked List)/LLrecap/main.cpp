#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
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
        node *a = createNewNode(data);
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
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
    }
    int searchValue(int target)
    {
       
        node *a= head;
        int index=0;
        while(a!=NULL)
        {
            if(a->data==target)
            {
                return index;
            }
            a=a->next;
            index++;
        }
        return -1;
    }
};
int main()
{
    LinkList l;
    l.insertAtHead(10);
    l.insertAtHead(50);
    l.travers();
    cout<<endl;
    cout<<l.searchValue(10)<<" no index found";
    

}