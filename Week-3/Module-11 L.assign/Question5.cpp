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
    int getSize()
    {
        node *a = head;
        int size=0;
        while(a!=NULL)
        {
            size++;
            a=a->next;
        }
        return size;
    }
    int getValue(int index)
    {
        if(getSize()<index)
        {
            return -1;
        }
        node *a=head;
        int cnt=0;
        while(a!=NULL)
        {
            if(cnt==index)
            {
                return a->data;
                break;
            }
            a=a->next;
            cnt++;
        }
        return -1;
    }

    void printReverse()
    {
        node *a=head;
        vector<int>value;
        while(a!=NULL)
        {
            value.push_back(a->data);
            a=a->next;
        }
        reverse(value.begin(),value.end());
        for(int i=0;i<value.size();i++)
        cout<<value[i]<<" ";
        cout<<endl;
    }
    void traverse()
    {
        node *a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<endl;
    }
    void swapFirst()
    {
        
    }
};


int main()
{
    LinkedList l;
    cout<<l.getSize()<<endl;
    l.insertAtHead(5);
    cout<<l.getSize()<<endl;
    l.insertAtHead(6);
    l.insertAtHead(30);
    cout<<l.getSize()<<endl;
    l.insertAtHead(20);
    l.insertAtHead(30);
    cout<<l.getValue(2)<<endl;
    cout<<l.getValue(6)<<endl;
    l.printReverse();
    l.traverse();
}