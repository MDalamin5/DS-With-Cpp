#include<bits/stdc++.h>
using namespace std;
template <class T>
class node
{
    public:
    T data;
    node *next;
    node *prev;

    node (T data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
template <class T>
class doublyLinkedList
{
    public:
    node<T> *head;
    int size;
    doublyLinkedList()
    {
        head=NULL;
        size=0;
    }
    void insertAtHead(T data)
    {
        node<T> *ob = new node(data);
        if(head==NULL)
        {
            head=ob;
            size++;
            return;
        }
        ob->next=head;
        head=ob;
        size++;
    }
    void eraseAtHead()
    {
        if(getSize()==0)
        {
            cout<<"Stack is Empty..."<<endl;
            return;
        }
        node<T> *a= head;
        node<T> *b= head->next;

        if(b!=NULL)
        {
            b->prev=NULL;
        }
        head=b;
        delete a;
        size--;
    }
    T top()
    {
        if(getSize()==0)
        {
            cout<<"Stack is Empty"<<endl;
            T ob;
            return ob;
        }
        return head->data;
    }
    void teravers()
    {
        node<T> *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
    }
    int getSize()
    {
        return size;
    }
};
template <class T>
class Stack
{
    public:
    doublyLinkedList<T> dl;
    Stack()
    {

    }
    void push(T data)
    {
        dl.insertAtHead(data);
    }
    void pop()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        dl.eraseAtHead();
    }
    T top()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is Empty!"<<endl;
            T ob;
            return ob;
        }
        return dl.head->data;
    }
    int getSizee()
    {
        return dl.getSize();
    }
};
int main()
{
    Stack<int> stk;
    stk.push(3);
    stk.push(1);
    stk.push(4);
    stk.push(2);
    stk.push(5);
/*
Stack<int>temp;
    while(stk.getSizee()>0)
    {
        temp.push(stk.top());
        stk.pop();
    }
    swap(temp,stk);

    while(stk.getSizee()>0)
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
*/
    Stack<int>tempp;

    while(stk.getSizee()>0)
    {
        int data = stk.top();
        stk.pop();
        while(tempp.getSizee()>0)
        {
            if(tempp.top()<data)
            {
                break;
            }
            stk.push(tempp.top());
            tempp.pop();
        }
        tempp.push(data);
    }
    swap(stk,tempp);

    while(stk.getSizee()>0)
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }

    
}