#include<bits/stdc++.h>
using namespace std;
template<class T>
class node
{
    public:
    int data;
    node<T> *next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
template<class T>
class linkedList
{
    public:
    node<T> *head;
    node<T> *tail;
    int size;
    linkedList()
    {
        head=NULL;
        tail=NULL;
        size=0;
    }

    void enQueue(int data)
    {
        node<T> *newNode = new node<T>(data);
        if(head==NULL)
        {
            head = newNode;
            tail=newNode;
            size++;
            return;
        }
        tail->next=newNode;
        tail=newNode;
        size++;
    }
    void deQueue()
    {
        if(getSize()==0)
        {
            cout<<"Sir, Queue is Empty!"<<endl;
            return;
        }
        if(getSize()==1)
        {
             delete head;
             head=NULL;
             tail=NULL;
             size--;
             return;
        }
        node<T> *a=head;
        head=a->next;
        delete a;
    }
    T top()
    {
        if(head==NULL)
        {
            cout<<"Sir, Queue is Empty!"<<endl;
            T ob;
            return ob;
        }
        return head->data;
    }
    void travers()
    {
        node<T> *a= head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<endl;
    }
    int getSize()
    {
        return size;
    }
};
int main()
{
    linkedList<int> l;
    l.enQueue(1);
   // l.enQueue(2);
    l.enQueue(3);
    //l.enQueue(4);
    l.travers();
    l.deQueue();
    l.travers();
    cout<<l.top()<<endl;
    cout<<l.getSize();

    linkedList<char> ch;
    ch.enQueue('a');
    cout<<ch.top();
    
}