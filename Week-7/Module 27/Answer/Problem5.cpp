#include <bits/stdc++.h>
using namespace std;
template<class T>
class node
{
public:
    T data;
    node *next;
    node *prv;
    node(T data)
    {
        this->data = data;
        this->next = NULL;
        this->prv = NULL;
    }
};
template <class T>
class Deque
{
public:
    node<T> *head;
    node<T> *tail;
    int size;
    Deque()
    {
        size=0;
        head=NULL;
        tail=NULL;
    }
    
    void insertAtHead(T data)
    {
        node<T> *newNode= new node<T>(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        node<T> *a = head;
        newNode->next=head;
        a->prv=newNode;
        head=newNode;
        size++;
    }
    void insertAtTail(T data)
    {
        node<T> *newNode= new node<T>(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        node<T> *a = tail;
        tail->next=newNode;
        newNode->prv=a;
        size++;
    }
    void eraseFromHead()
    {
        if(getSize()==0)
        {
            cout<<"Deque is Empty"<<endl;
            return;
        }
        if(getSize()==1)
        {
            delete tail;
            head=tail=NULL;
            size--;
            return;
        }
        node<T> *temp=head;
        head=temp->next;
        head->prv=NULL;
        delete temp;
        size--;
    }
    void eraseFromTail()
    {
         if(getSize()==0)
        {
            cout<<"Deque is Empty"<<endl;
            return;
        }
        if(getSize()==1)
        {
            delete tail;
            head=tail=NULL;
            size--;
            return;
        }
        node<T> *temp = tail;
        tail=temp->prv;
        tail->next=NULL;
        size--;
        delete temp;
    }
    T headData()
    {
        if(getSize()==0)
        {
            cout<<"Deque is empty"<<endl;
            T ob;
            return ob;
        }
        return head->data;
    }
    T tailData()
    {
        if(getSize()==0)
        {
            cout<<"Deque is empty"<<endl;
            T ob;
            return ob;
        }
        return tail->data;
    }
    int getSize()
    {
        return size;
    }
    void travers()
    {
        node<T> *a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<endl;
    }
};
int main()
{
    Deque<int> dl;
    dl.insertAtHead(4);
    dl.insertAtHead(5);
    dl.insertAtHead(6);
    dl.travers();
    //dl.eraseFromHead();
   // dl.eraseFromHead();
   // dl.eraseFromHead();
    //dl.eraseFromHead();
    dl.eraseFromTail();
    dl.eraseFromTail();
    dl.eraseFromTail();
    dl.eraseFromTail();
    dl.travers();
}