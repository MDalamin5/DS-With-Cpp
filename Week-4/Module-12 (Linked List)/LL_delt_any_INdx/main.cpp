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
    int size;
    LinkList()
    {
        head=NULL;
        size=0;
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
        size++;
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
    int getSize()
    {
        //now implements the code to time complexity O(1)
        return size;
        //this code work O(n)
        /*
        int sz=0;
        node *a = head;
        while(a!=NULL)
        {
            sz++;
            a=a->next;
        }
        return sz;
        */
        
    }
    void insertAtAnyIndex(int indx,int value)
    {
        if(indx<0 || indx>size)
        {
            return;
        }
        if(indx==0)
        {
            insertAtHead(value);
        }
        size++;
        node *a = head;
        int current_i=0;
        while(current_i!=indx-1)
        {
            a=a->next;
            current_i++;
        }
        node *newNode= createNewNode(value);
        newNode->next=a->next;
        a->next=newNode;

    }
    void deletAtHead()
    {
        if(head==NULL)
        {
            cout<<"Notheing to delete\n";
            return;
        }
        size--;
        node *a = head;
        head=a->next;
        delete a;
    }
    void deletAtAnyIndex(int index)
    {
        if(index>size-1)
        {
            cout<<"You are entering wrong index!!"<<endl;
            return;
        }
        if(index==0)
        {
            deletAtHead();
        }
        size--;
        node *a = head;
        int current_i=0;
        while(current_i!=index-1)
        {
            a=a->next;
            current_i++;
        }
        node *b=a->next;
        a->next=b->next;
        delete b;
    }
};
int main()
{
    LinkList l;
    l.insertAtHead(10);
    l.insertAtHead(50);
    l.insertAtHead(60);
    l.insertAtHead(70);
    l.insertAtHead(80);
    //l.travers();
    l.insertAtAnyIndex(3,22);
    l.travers();
    cout<<endl;
    l.deletAtHead();
    l.travers();
    cout<<endl;
    l.deletAtAnyIndex(2);
    l.travers();
    cout<<endl;
    cout<<l.getSize();
    //cout<<l.searchValue(10)<<" no index found";
    

}