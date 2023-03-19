#include<bits/stdc++.h>

using namespace std;


template<class T>
class node
{
public:
    T data;
    node * nxt;
    node * prv;
};
template<class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node<T> *CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

   //Return size
    int getSize()
    {
        return sz;
    }
    // Delete from head
    void eraseAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *temp = head->nxt;
       delete a;
       if(temp!= NULL)
       {
        temp->prv=NULL;
       }
        head=temp;
        sz--;
        
    }
};

template<class T>
class Stack
{
    public:
    DoublyLinkedList<T> dl;
    Stack()
    {

    }

    void push(T data)
    {
        dl.InsertAtHead(data);
    }
    void pop()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack Is Empty";
        }
        dl.eraseAtHead();
    }
    T top()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is Empty"<<endl;
            T ob;
            return ob;
        }
        return dl.head->data;
    }
    T getSize()
    {
        return dl.getSize();
    }
};
int main()
{
    Stack<int>a;
    a.push(4);
    a.push(6);
    a.push(3);
    a.push(7);

    Stack<int>tem;
    while(a.getSize()>0)
    {
        int t= a.top();
        a.pop();
        while(tem.getSize()>0)
        {
            if(tem.top()<t)
            {
                break;
            }
            a.push(tem.top());
            tem.pop();
        }
        tem.push(t);
    }
    swap(a,tem);

    while(a.getSize()>0)
    {
        cout<<a.top()<<" ";
        a.pop();
    }
    cout<<endl;
    
}